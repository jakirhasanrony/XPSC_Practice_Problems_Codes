#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<ll, ll> freq;
    ll l = 0, r = 0, cnt = 0;

    while (r < n)
    {
        freq[v[r]]++;
        while ((ll)freq.size() > k)
        {
            freq[v[l]]--;
            if (freq[v[l]] == 0)
            {
                freq.erase(v[l]);
            }
            l++;
        }

        cnt += (r - l + 1);
        r++;
    }

    cout << cnt << '\n';
    return 0;
}
