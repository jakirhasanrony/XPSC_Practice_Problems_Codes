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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string reverse_s = s;
        reverse(reverse_s.begin(), reverse_s.end());
        if (s <= reverse_s)
        {
            cout << s << '\n';
        }
        else
        {
            cout << reverse_s << s << '\n';
        }
    }

    return 0;
}