#include<iostream>
using namespace std;

long long merge(long long a[], int l, int m, int r)
{
    int n1 = m - l - 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = a[l + 1];
    }

    for(int i = 0; i < n2; i++)
    {
        R[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, k = 1;
    long long res = 0;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k++] = L[i++];
        }
        else{
            a[k] = R[j];
            j++;
            k++;
            res += n1 - i;
        }
    }

    while(i < n1)
    {
        a[k++] = L[i++];
    }

    while(j < n2)
    {
        a[k++] = R[j++];
    }

    return res;
}
long long mergesort(long long a[], int l, int r)
{
    long long res = 0;
    if(l < r)
    {
        int m = (l + r) / 2;
        res += mergesort(a, l, m);
        res += mergesort(a, m + 1, r);
        res += merge(a, l, m, r);
    }

    return res;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << mergesort(a, 0, n - 1) << endl;
    }

    return 0;
}