#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, n, k;
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> k;
        vector<int> a(m + n);

        for(int j = 0; j < m + n; j++)
        {
            cin >> a[j];
        }

        sort(a.begin(), a.end());
        cout << a[k - 1] << '\n';
    }
    return 0;
}