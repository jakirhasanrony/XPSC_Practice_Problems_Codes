class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        int n = arr.size();
        map<int, int> map;
        int sum = 0, max_len = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == k)
            {
                max_len = i + 1;
            }

            if (map.find(sum - k) != map.end())
            {
                max_len = max(max_len, i - map[sum - k]);
            }

            if (map.find(sum) == map.end())
            {
                map[sum] = i;
            }
        }
        return max_len;
    }
};