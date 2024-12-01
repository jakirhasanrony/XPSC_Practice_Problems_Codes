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
        int n, m;
        cin >> n >> m;

        if (n > m)
        {
            cout << "No" << '\n';
            continue;
        }

        vector<int> v(n);
        ll sum = 0;

        if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "Yes" << '\n';
            for (int i = 0; i < n - 2; i++)
            {
                v[i] = 1;
                sum += v[i];
            }
            v[n - 2] = (m - sum) / 2;
            v[n - 1] = v[n - 2];
        }
        else if (n % 2 != 0 && m % 2 == 0)
        {
            cout << "Yes" << '\n';
            for (int i = 0; i < n - 1; i++)
            {
                v[i] = 1;
                sum += v[i];
            }
            v[n - 1] = (m - sum);
        }
        else if (n % 2 != 0 && m % 2 != 0)
        {
            cout << "Yes" << '\n';
            for (int i = 0; i < n - 1; i++)
            {
                v[i] = 1;
                sum += v[i];
            }
            v[n-1] = (m - sum);
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            cout << "No" << '\n';
            continue;
        }

        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}