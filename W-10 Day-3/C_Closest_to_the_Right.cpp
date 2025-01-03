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
        ll l = 0, r = n - 1, mid, ans = n;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (key <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << line;
    }

    return 0;
}