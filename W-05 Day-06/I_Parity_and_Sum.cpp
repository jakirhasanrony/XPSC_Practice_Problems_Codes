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
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> even;
        vector<ll> odd;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }

        if (odd.size() == 0 || even.size() == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        ll max_val = odd.back();
        ll ans = even.size();

        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] > max_val)
            {
                ans++;
                break;
            }
            max_val += even[i];
        }

        // for (ll val : even)
        // {
        //     if (val > max_val)
        //     {
        //         ans++;
        //         break;
        //     }
        //     max_val += val;
        // }
        cout << ans << '\n';
    }

    return 0;
}