class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int k = nums.size();
        long long int start = 0,cnt = 0, res = 0;
        while(start < k)
        {
            if(nums[start ] == 0)
            {
                cnt ++;
                res += cnt;
            }
            else cnt = 0;
            start++;
        }
        return res;
    }
};