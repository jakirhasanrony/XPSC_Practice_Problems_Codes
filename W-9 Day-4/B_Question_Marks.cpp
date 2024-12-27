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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int freq[4] = {0};
        for (auto i : s)
        {
            if (i != '?')
            {
                freq[i - 'A']++;
            }
        }

        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans += min(n, freq[i]);
        }
        cout << ans << line;
    }

    return 0;
}