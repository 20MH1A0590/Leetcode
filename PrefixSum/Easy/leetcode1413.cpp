class Solution {
public:
    int helper(vector<int>&prefix,int StartVal,int k) 
    {
        for(int i=1;i<=k;i++)
        {
            if(prefix[i]+StartVal < 1) return helper(prefix,StartVal+1,k);
        }
        return StartVal; 
    }
    int minStartValue(vector<int>& nums) {
        int pos = 0, k=nums.size(); 
        // for(int i = 0;i < k; i++)
        // {
        //     if(nums[i] > 0) pos++; 
        // }
        // if(pos == k) return 1; // if there is no single -ve value in nums then my StartVal will be 1
        vector<int>prefix(k+1,0);
        for(int i=1;i<=k;i++) prefix[i]=prefix[i-1] + nums[i-1];
        return helper(prefix,1,k);
    }
};