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
        ll n, sum = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        ll operations = 0;
        bool negSeg = false;
        for (int i = 0; i <= n; i++)
        {

            if (negSeg)
            {
                if (i == n || v[i] > 0)
                {
                    operations++;
                    negSeg = false;
                }
            }
            else
            {
                if (v[i] < 0)
                {
                    negSeg = true;
                }
            }
        }

        cout << sum << " " << operations << endl;
    }

    return 0;
}