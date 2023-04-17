class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //fastio
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int mx = INT_MIN;
        long long  sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum > mx) mx = sum;
            if(sum < 0) sum = 0;
        }
        return mx;
    }
};