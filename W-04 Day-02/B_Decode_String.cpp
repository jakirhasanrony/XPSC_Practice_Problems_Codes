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
        string t;
        cin >> t;

        string s = "";
        for (int i = n - 1; i >= 0;)
        {
            if (t[i] == '0')
            {
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                s += (char)(96 + num);
                i -= 3;
            }
            else
            {
                int num = ((t[i] - '0'));
                s += (char)(96 + num);
                i--;
            }
        }

        reverse(s.begin(), s.end());
        cout << s << '\n';
    }

    return 0;
}
