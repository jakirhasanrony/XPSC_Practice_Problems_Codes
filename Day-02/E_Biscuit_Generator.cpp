#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;
    int total_t = t + 0.5;
    int total_biscuit = 0;
    int count = 0;

    for (int i = a; i <= total_t; i++)
    {
        if (i % a == 0)
        {
            count++;
        }
    }
    total_biscuit = b * count;
    cout << total_biscuit << '\n';

    return 0;
}