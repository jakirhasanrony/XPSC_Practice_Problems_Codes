#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, t;
    cin >> s >> t;

    int count = 0;

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s - a; b++)
        {
            for (int c = 0; c <= s - a - b; c++)
            {
                if (a * b * c <= t)
                {
                    count++;
                }
            }
        }
    }
    cout << count << '\n';

    return 0;
}