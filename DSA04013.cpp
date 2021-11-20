#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int res = n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = n/2 - 1, j = n - 1; i >= 0 && j >= n/2; )
        {
            if(a[j] >= 2*a[i])
            {
                res--;
                i--;
                j--;
            }
            else i--;
        }
        cout << res << '\n';
    }

    return 0;
}