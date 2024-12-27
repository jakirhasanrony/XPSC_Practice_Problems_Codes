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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << line;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                int diff = abs(a[i] - (i + 1));
                if (diff % k)
                {
                    cnt++;
                }
            }
            if (cnt > 2)
            {
                cout << -1 << line;
            }
            else if (cnt == 2)
            {
                cout << 1 << line;
            }
            else
            {
                cout << 0 << line;
            }
        }
    }

    return 0;
}