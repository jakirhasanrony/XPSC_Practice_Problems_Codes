#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, a[i]);
        }

        ll ans = 0;
        bool ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = g1;
        }
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = g2;
            }
        }

        cout << ans << line;
    }

    return 0;
}