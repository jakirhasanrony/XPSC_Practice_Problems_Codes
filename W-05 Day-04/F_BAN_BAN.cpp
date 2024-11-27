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
        if (n == 1)
        {
            cout << 1 << '\n';
            cout << 1 << " " << 2 << '\n';
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << (n / 2) << '\n';
            }
            else
            {
                cout << ((n + 1) / 2) << '\n';
            }
            int l = 1, r = 3 * n;
            while (l < r)
            {
                int b_pos = l;
                int last_n_pos = r;

                cout << b_pos << " " << last_n_pos << '\n';
                l += 3;
                r -= 3;
            }
        }
    }

    return 0;
}