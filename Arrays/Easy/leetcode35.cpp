class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=nums.size();
        int maxi=*max_element(nums.begin(),nums.end()); 
        // traverse over the nums vector and check if element>= target
        // if condition is true then our insert position is at element's index
        for(int i=0;i<k;i++)
        {
            if(nums[i]>=target) return i;
        }
        // if above condition fails for all the cases then it says that the target value is strictly greater than max element of nums.
    // In that case insert position is at end of the nums(i.e nums.size())
        return k;
    }
};