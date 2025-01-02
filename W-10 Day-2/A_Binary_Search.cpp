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
        ll x;
        cin >> x;
        ll l = 0, r = n - 1, mid;
        bool f = false;
        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (a[mid] == x)
            {
                f = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (f)
        {
            cout << "YES" << line;
        }
        else
        {
            cout << "NO" << line;
        }
    }

    return 0;
}