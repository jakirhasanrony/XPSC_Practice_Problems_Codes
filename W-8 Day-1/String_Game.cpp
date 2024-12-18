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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int one_count = 0, zero_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }
        }

        int min_pair = min(one_count, zero_count);

        if (min_pair % 2 == 0)
        {
            cout << "Ramos" << line;
        }
        else
        {
            cout << "Zlatan" << line;
        }
    }

    return 0;
}