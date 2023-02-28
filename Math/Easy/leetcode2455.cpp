class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,cnt=0;
        for(auto it : nums)
        {
            if(!(it%2) && it%3==0) {sum+=it;cnt++;}
        }
        if(sum==0) return 0;
        return sum/cnt;
    }
};