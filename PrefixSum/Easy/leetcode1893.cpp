class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int k=ranges.size();
        vector<int>ans(52,0);
        for(int ind = 0; ind < k; ind++)
        {
            ans[(ranges[ind][0])] += 1;
            ans[(ranges[ind][1])+1] -= 1; 
        }
        int m=ans.size();
        for(int ind=1;ind<m;ind++)
        {
            ans[ind]=ans[ind]+ans[ind-1];
        }
        for(int ind = left;ind <= right; ind++)
        {
            if(ans[ind]==0) return false;
        }
        return true;
    }
};