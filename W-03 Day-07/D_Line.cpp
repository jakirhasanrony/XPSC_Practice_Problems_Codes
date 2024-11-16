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
        string a;
        cin >> a;
        ll ch[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 'L')
            {
                ans = ans + i;
            }
            else
            {
                ans = ans + n - i - 1;
            }

            if (a[i] == 'L')
            {
                ch[i] = n - i - 1 - (i);
            }
            else
            {
                ch[i] = i - (n - i - 1);
            }
        }
        sort(ch, ch + n);
        reverse(ch, ch + n);

        for (ll i = 0; i < n; i++)
        {
            if (ch[i] > 0)
            {
                ans = ans + ch[i];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}
