class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = -1;
        for(auto & num : nums) mx = max(num,mx);
        for(auto & num : nums)
        {
            if( num != mx && num*2 > mx) return -1;
        }
        for(int ind = 0; ind < nums.size(); ind++)
        {
            if(nums[ind] == mx) return ind;
        }
        return -1;
    }
};