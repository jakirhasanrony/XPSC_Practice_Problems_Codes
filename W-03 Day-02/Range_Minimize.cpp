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
        sort(v.begin(), v.end());

        // case-1: remove two smallest element
        int a = v[n - 1];
        int b = v[2];
        int ans1 = abs(a - b);

        // case-2: remove two largest
        int c = v[n - 3];
        int d = v[0];
        int ans2 = abs(c - d);

        // case-2: remove one small and one large
        int e = v[n - 2];
        int f = v[1];
        int ans3 = abs(e - f);
        int result = min({ans1, ans2, ans3});

        cout << result << '\n';
    }

    return 0;
}