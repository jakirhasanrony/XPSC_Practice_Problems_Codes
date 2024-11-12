// sliding window
// problem link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// solution:

class Solution
{
public:
    long long maximumSumSubarray(vector<int> &a, int k)
    {
        int n = a.size(), l = 0, r = 0;
        long long ans = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= a[l];
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

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends









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

//     int l = 0, r = 0;
//     long long ans = 0, sum = 0;
//     while (r < n)
//     {
//         sum += v[r];
//         if (r - l + 1 == k)
//         {
//             ans = max(ans, sum);
//             sum -= v[l];
//             l++;
//             r++;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     cout << ans << '\n';

//     return 0;
// }