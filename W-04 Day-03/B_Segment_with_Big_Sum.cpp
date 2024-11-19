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
    ll l = 0, r = 0, sum = 0, min_len = n + 1;
    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            min_len = min(min_len, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (min_len == n + 1)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << min_len << '\n';
    }
    return 0;
}