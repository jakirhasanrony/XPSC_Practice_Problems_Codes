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
        int n, zero = 0, non_zero = 0, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] != 0)
            {
                non_zero++;
            }
            else
            {
                zero++;
            }
        }
        if (zero == 0)
        {
            ans = 0;
        }
        else
        {
            if (non_zero >= zero - 1)
            {
                ans = 0;
            }
            else
            {
                int mx = *max_element(v.begin(), v.end());
                if (mx == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}