#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans = ans ^ v[i];
        }

        if (n % 2 == 0)
        {
            if (ans == 0)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else
        {
            cout << ans << '\n';
        }
    }

    return 0;
}