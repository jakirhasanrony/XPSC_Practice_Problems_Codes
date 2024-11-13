// problem link: https://codeforces.com/contest/1873/problem/D

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
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l, r, cnt = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i = i + k - 1;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}