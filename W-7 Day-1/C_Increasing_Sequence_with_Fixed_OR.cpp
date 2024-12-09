#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        deque<ll> ans;

        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                ll value = (n - (1LL << k));
                if (value > 0)
                {
                    ans.push_front(value);
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() << line;
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << line;
    }

    return 0;
}