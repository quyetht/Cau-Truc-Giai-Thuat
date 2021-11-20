#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;

        cin >> n;
        vector<long long > a(n + 1), b(n);
        for(long long i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(int i = 1; i <=n - 1; i++)
        {
            cin >> b[i];
        }
        long long res = n;

        for(long long i = 1; i<= n - 1; i++)
        {
            if(a[i] != b[i])
            {
                res = i;
                break;
            }
        }

        cout << res << '\n';
    }

    return 0;
}