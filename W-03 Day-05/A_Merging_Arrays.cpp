// problem_link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<ll> v1(n);
    vector<ll> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    vector<ll> merged;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] <= v2[j])
        {
            merged.push_back(v1[i]);
            i++;
        }
        else
        {
            merged.push_back(v2[j]);
            j++;
        }
    }
    while (i < n)
    {
        merged.push_back(v1[i]);
        i++;
    }
    while (j < m)
    {
        merged.push_back(v2[j]);
        j++;
    }

    for (ll val : merged)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}