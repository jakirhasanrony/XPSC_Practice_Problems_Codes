#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll tiles_common = n / LCM(a, b);
    ll tiles_a = (n / a) - tiles_common;
    ll tiles_b = (n / b) - tiles_common;

    ll chocolate_common = tiles_common * max(p, q);
    ll chocolate_a = tiles_a * p;
    ll chocolate_b = tiles_b * q;

    ll ans = chocolate_a + chocolate_b + chocolate_common;
    cout << ans << line;

    return 0;
}