#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    int small_odd = 1e9 + 5;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];

        if (v[i] % 2 != 0)
        {
            small_odd = min(small_odd, v[i]);
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        cout << sum - small_odd << '\n';
    }

    return 0;
}