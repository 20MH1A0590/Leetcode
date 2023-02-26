class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        // This problem is given in leetcode Weekly Contest 334  {mode:Easy}
        
        // lot of memory get's wasted for this problem... it's bad
        // but the solution is clear,caluculating prefix ..
        
        vector<int>pref;
        vector<int>leftSum;
        vector<int>rightSum;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pref.push_back(sum);
        }
        leftSum.push_back(0);
        for(int i=1;i<pref.size();i++) leftSum.push_back(pref[i]-nums[i]);
        for(int i=0;i<pref.size();i++) rightSum.push_back(pref[pref.size()-1]-pref[i]);
        for(int i=0;i<nums.size();i++) nums[i]=abs(leftSum[i]-rightSum[i]);
        return nums;
    }
};