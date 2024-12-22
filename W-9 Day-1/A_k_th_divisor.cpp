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
    vector<ll> divisors;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
            {
                divisors.push_back((n / i));
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() < k)
    {
        cout << -1 << line;
    }
    else
    {
        cout << divisors[k - 1] << line;
    }

    return 0;
}