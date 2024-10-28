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
        string s;
        cin >> s;
        int first_position = -1, last_position = -1;
        first_position = s.find('B');
        last_position = s.rfind('B');
        int ans = last_position - first_position + 1;
        cout << ans << '\n';
    }

    return 0;
}