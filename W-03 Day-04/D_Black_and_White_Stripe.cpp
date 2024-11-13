// problem Link:https://codeforces.com/problemset/problem/1690/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = 0, cnt = 0;
        int ans = INT_MAX;
        while (r < n)
        {
            if (v[r] == 'W')
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                ans = min(ans, cnt);
                if (v[l] == 'W')
                {
                    cnt--;
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}