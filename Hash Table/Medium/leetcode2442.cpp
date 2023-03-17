class Solution {
public:
    int rev(long long num)
    {
        long long  rem = 0, sum = 0;
        while(num > 0)
        {
            rem = num % 10;
            sum = sum * 10 + rem;
            num /= 10;
        }
        return sum;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>ans(nums);
        for(long long  i = 0;i < nums.size(); i++) ans.push_back(rev(nums[i]));
        map<long long , long long>mp;
        for(auto &it : ans) mp[it]++;
        return mp.size();   
    }
};