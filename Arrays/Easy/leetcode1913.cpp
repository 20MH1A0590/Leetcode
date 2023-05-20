class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    int maxProductDifference(vector<int>& nums) {
        int k = nums.size();
        sort(nums.begin(),nums.end());
        return (nums[k-1]*nums[k-2])-(nums[0]*nums[1]);
    }
};
