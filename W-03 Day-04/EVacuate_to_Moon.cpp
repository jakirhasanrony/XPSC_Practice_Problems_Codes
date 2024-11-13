// problem link: https://www.codechef.com/problems/MOONSOON

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
        int n, m, h;
        cin >> n >> m >> h;

        vector<ll> car_power_capacity(n);
        vector<ll> outlet_power_capacity(m);

        for (int i = 0; i < n; i++)
        {
            cin >> car_power_capacity[i];
        }

        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            outlet_power_capacity[i] = x * h;
        }

        sort(car_power_capacity.rbegin(), car_power_capacity.rend());
        sort(outlet_power_capacity.rbegin(), outlet_power_capacity.rend());

        ll totalEnergyStored = 0;
        int i = 0;
        int j = 0;

        while (i < n && j < m)
        {
            if (outlet_power_capacity[j] >= car_power_capacity[i])
            {
                totalEnergyStored += car_power_capacity[i];
                i++;
                j++;
            }
            else
            {
                totalEnergyStored += outlet_power_capacity[j];
                i++;
                j++;
            }
        }

        cout << totalEnergyStored << endl;
    }

    return 0;
}
