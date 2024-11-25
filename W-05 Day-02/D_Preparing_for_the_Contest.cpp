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
        int n, k;
        cin >> n >> k;
        vector<int> result;
        for (int i = 1; i <= k + 1; i++)
        {
            if (i == k + 1)
            {
                result.push_back(n);
                break;
            }
            else
            {
                result.push_back(i);
            }
        }
        for (int i = n - 1; i >= k + 1; i--)
        {
            result.push_back(i);
        }

        for (int num : result)
        {
            cout << num << " ";
        }
        cout << '\n';
    }

    return 0;
}