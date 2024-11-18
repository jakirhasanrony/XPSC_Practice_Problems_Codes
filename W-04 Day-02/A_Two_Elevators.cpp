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
        int a, b, c;
        cin >> a >> b >> c;
        int first_one_take_time = a,
            second_one_take_time = 0;
        second_one_take_time = abs(b - c) + c;
        if (first_one_take_time < second_one_take_time)
        {
            cout << 1 << '\n';
        }
        else if (second_one_take_time < first_one_take_time)
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }

    return 0;
}