#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<char> target = {'T', 'i', 'm', 'u', 'r'};
    sort(target.begin(), target.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<char> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        bool flag = true;

        if (v.size() == 5)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] != target[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            flag = false;
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}