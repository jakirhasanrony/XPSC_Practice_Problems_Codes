#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<long long> v1;
    vector<long long> v2;

    for (int i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        v1.push_back(m);
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != x)
        {
            v2.push_back(v1[i]);
        }
    }

    for (long long val : v2)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}