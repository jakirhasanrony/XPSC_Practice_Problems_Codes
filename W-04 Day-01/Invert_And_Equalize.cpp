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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                cnt++;
            }
        }
        cout << (cnt + 1) / 2 << '\n';
    }

    return 0;
}