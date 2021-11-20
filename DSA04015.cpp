#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, x, res = 0;
        int vt = -1;
        cin >> n >> x;
        vector<long long> a(n + 5);
        for(int j = 1; j <= n; j++)
        {
            cin >> a[j];
            if(a[j] <= x)
            {
                vt = j;
            }
        }

        cout << vt;
        cout << endl;
    }

    return 0;
}