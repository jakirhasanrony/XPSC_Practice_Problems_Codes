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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> s;
        int len = n;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s.find(v[i]) != s.end())
            {
                break;
            }
            s.insert(v[i]);
            len--;
        }

        cout << len << '\n';
    }

    return 0;
}
