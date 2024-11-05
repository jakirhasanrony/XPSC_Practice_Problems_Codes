#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> v(n + 1), cnt(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    while (t--)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << '\n';
    }

    return 0;
}