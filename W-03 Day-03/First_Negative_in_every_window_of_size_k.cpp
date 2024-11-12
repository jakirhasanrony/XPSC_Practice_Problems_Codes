// problem link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &a, int k)
    {
        int n = a.size(), l = 0, r = 0;
        vector<int> ans;
        queue<int> q;
        while (r < n)
        {
            if (a[r] < 0)
            {
                q.push(a[r]);
            }
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    ans.push_back(q.front());
                    if (a[l] == q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                    ans.push_back(0);
                }
                l++, r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<int> ans;
//     queue<int> q;
//     int l = 0, r = 0;
//     while (r < n)
//     {
//         if (v[r] < 0)
//         {
//             q.push(v[r]);
//         }
//         if (r - l + 1 == k)
//         {
//             if (!q.empty())
//             {
//                 ans.push_back(q.front());
//                 if (v[l] == q.front())
//                 {
//                     q.pop();
//                 }
//             }
//             else
//             {
//                 ans.push_back(0);
//             }
//             l++;
//             r++;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     for (auto val : ans)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }