#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            v.push_back(i);
        }
    }
    if (!v.empty())
    {
        cout << v.front() << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}