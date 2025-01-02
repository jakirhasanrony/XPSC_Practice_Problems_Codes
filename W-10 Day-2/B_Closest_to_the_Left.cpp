#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < k; i++)
    {
        ll key;
        cin >> key;

        ll l = 0, r = n - 1, mid, ans = 0;

        if (a[0] > key)
        {
            cout << 0 << line;
        }
        else
        {
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (key >= a[mid])
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            cout << ans + 1 << line;
        }
    }

    return 0;
}