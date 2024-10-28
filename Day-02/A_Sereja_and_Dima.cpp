#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int serejas_sum = 0;
    int dimas_sum = 0;
    int person = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if (person % 2 != 0)
        {
            serejas_sum += mx;
        }
        else
        {
            dimas_sum += mx;
        }
        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        person++;
    }

    cout << serejas_sum << " " << dimas_sum << '\n';

    return 0;
}