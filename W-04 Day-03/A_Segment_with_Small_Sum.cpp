#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, r = 0, sum = 0, max_len = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            max_len = max(max_len, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << max_len << '\n';

    return 0;
}