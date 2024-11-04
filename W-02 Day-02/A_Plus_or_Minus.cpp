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
        int a, b, c, res1, res2;
        cin >> a >> b >> c;
        res1 = a + b;
        res2 = a - b;
        if (res1 == c)
        {
            cout << "+" << '\n';
        }
        else if (res2 == c)
        {
            cout << "-" << '\n';
        }
    }

    return 0;
}