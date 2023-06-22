class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0,res = 0;
        for(auto &it: gain)
        {
            sum+=it;
            res = max(sum , res);
        }
        return res;
    }
};
