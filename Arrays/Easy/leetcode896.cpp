class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // comparing the element with previous ele by using two loops
        // one is for strictly increasing and other for strictly decreasing
        // for both the loops we get n-1 comparisons
        // checking comparisons == nums.size()-1;
        int cnt1=0,cnt2=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=nums[i-1]) cnt1++;
            if(nums[i]<=nums[i-1]) cnt2++;
        }
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]<=nums[i-1]) cnt2++;
        // }
        if(cnt1==nums.size()-1 || cnt2==nums.size()-1) return true;
        else return false;
    }
};