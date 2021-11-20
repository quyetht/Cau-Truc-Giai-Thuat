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
        int a, s = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> a;
            if(a == 0)
            {
                s++;
            }
        }
        cout << s << '\n';
    }

    return 0;
}
