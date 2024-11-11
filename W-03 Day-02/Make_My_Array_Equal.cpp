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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] != 0)
            {
                s.insert(v[i]);
            }
        }

        if (s.size() > 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}