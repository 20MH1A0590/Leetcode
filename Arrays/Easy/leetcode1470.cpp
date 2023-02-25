class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // approach : two pointer
        // first pointer starts and index 0 and ends at middle;
        // second pointer starts at n and ends at nums.size();
        int first=0,middle=n;
        vector<int>ans;
        while(first<n && middle<2*n)
        {
            ans.push_back(nums[first]);
            ans.push_back(nums[middle]);
            first++;
            middle++;
        }
        return ans;
    }
};