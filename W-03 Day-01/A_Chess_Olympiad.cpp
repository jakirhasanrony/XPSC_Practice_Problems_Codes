#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int remaining_game = 4 - (x + y + z);

    double teams_max_possible_points = (x * 1) + (y * 0.5) + (1 * remaining_game);

    if (teams_max_possible_points > 2)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}