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
        int x = 1, y = n * n;
        vector<int> v;
        for (int i = 1; i <= n * n; i++)
        {
            if (i % 2 != 0)
            {
                v.push_back(x);
                x++;
            }
            else
            {
                v.push_back(y);
                y--;
            }
        }

        x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = x; j < x + n; j++)
                {
                    cout << v[j] << " ";
                }
                cout << '\n';
                x += n;
            }
            else
            {
                for (int j = (n + x) - 1; j >= x; j--)
                {
                    cout << v[j] << " ";
                }
                cout << '\n';
                x += n;
            }
        }
    }

    return 0;
}