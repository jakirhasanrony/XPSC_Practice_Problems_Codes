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
    ll l = 0, r = 0, sum = 0, cnt = 0;

    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            cnt += (n - r);
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << cnt << '\n';

    return 0;
}