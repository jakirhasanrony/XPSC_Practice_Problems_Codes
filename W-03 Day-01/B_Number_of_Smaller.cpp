#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    // brute-force solution

    // for (int i = 0; i < m; i++)
    // {
    //     int cnt = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v2[i] > v1[j])
    //         {
    //             cnt++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     cout << cnt << " ";
    // }

    int l = 0, r = 0, cnt = 0;
    while (r < m)
    {
        if (l < n && v1[l] < v2[r])
        {
            cnt++, l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }

    return 0;
}