class Solution {
public:
    int t_sum(int num)
    {
        int sum = 0;
        while(num > 0)
        {
            int rem = num%10;
            sum += rem;
            num /= 10; 
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>mp;
        while(lowLimit <= highLimit)
        {
            mp[t_sum(lowLimit)]++;
            lowLimit++;
        }
        int mx = -1;
        for(auto &it : mp)  mx = max(it.second,mx);
        return mx;
    }
};