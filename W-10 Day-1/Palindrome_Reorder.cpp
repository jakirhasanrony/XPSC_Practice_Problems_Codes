#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int cnt = 0;
    char ch;
    for (auto x : mp)
    {
        if (x.second % 2)
        {
            ch = x.first;
            cnt++;
        }
    }
    if ((s.size() % 2 == 0 and cnt > 0) or cnt > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string res = "";
        for (auto x : mp)
        {
            for (int i = 1; i <= x.second / 2; i++)
            {
                res += x.first;
            }
        }
        cout << res;
        if (s.size() % 2)
        {
            cout << ch;
        }
        reverse(res.begin(), res.end());
        cout << res;
    }
    return 0;
}