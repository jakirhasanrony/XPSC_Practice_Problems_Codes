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

        string s, x;
        cin >> s >> x;

        if (s == x || s[0] == '1')
        {
            cout << "YES" << line;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != x[i])
                {
                    if (pos > i)
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
            {
                cout << "YES" << line;
            }
            else
            {
                cout << "NO" << line;
            }
        }
        else
        {
            cout << "NO" << line;
        }
    }

    return 0;
}