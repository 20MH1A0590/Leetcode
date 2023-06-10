class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    vector<long long> findPrefixScore(vector<int>& nums) {
        int mx = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
           mx = max(mx, nums[i]);
           nums[i] = nums[i] + mx;
        }
        vector<long long>pref(nums.size(), nums[0]);
        for(int i = 1; i < nums.size(); i++)
        {
            pref[i] = nums[i] + pref[i-1];
        }
        return pref;
    }
};
