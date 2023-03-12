class Solution {
public:
    int maxScore(vector<int>& nums) {
        // sorting the elements in descending and counting the +ve elements in the Prefix array.
        sort(nums.begin(),nums.end(),greater<int>());
        long long int k = nums.size(),Currsum = 0; 
        vector<long long int>ans(k+1,0);
        for(long long int i=1;i<=k;i++)
        {
            Currsum += nums[i-1];
            ans[i]=Currsum;
        }
        long long int max_score = 0;
        for(long long int i=1;i<=k;i++) if(ans[i] > 0) max_score++;
        return max_score;
    }
};