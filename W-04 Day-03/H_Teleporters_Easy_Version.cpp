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
        ll n, c;
        cin >> n >> c;

        vector<ll> costs(n);
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            costs[i] = a + (i + 1);
        }

        sort(costs.begin(), costs.end());

        ll sum = 0, count = 0;

        for (ll i = 0; i < n; i++)
        {
            if (sum + costs[i] > c)
            {
                break;
            }
            sum += costs[i];
            count++;
        }

        cout << count << '\n';
    }

    return 0;
}
