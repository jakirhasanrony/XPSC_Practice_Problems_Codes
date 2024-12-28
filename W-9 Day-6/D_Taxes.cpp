#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << line;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << line;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << line;
        }
        else
        {
            cout << 3 << line;
        }
    }

    return 0;
}