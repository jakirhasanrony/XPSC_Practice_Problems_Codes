#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    vector<string> v;
    string ans;
    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[v[i]] == 0)
        {
            ans += v[i].substr(v[i].size() - 2);
        }
        mp[v[i]]++;
    }
    cout << ans << endl;
    return 0;
}
