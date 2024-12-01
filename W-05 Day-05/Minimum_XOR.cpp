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
        int n, ans, XOR = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];
        }
        ans = XOR;
        for (int i = 0; i < n; i++)
        {
            int current_XOR = (XOR ^ v[i]);
            ans = min(ans, current_XOR);
        }
        cout << ans << '\n';
    }

    return 0;
}