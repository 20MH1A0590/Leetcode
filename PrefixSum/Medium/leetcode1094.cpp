class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int>ans(1002,0);
        int k=trips.size();
        for(int ind = 0; ind < k; ind++)
        {
            ans[trips[ind][1]] += trips[ind][0];// adding the passengers at {from}
            ans[trips[ind][2]] -= trips[ind][0];// removing the passengers at {to}
        }
        int sz=ans.size();
        for(int ind = 1;ind < sz ;ind++)  ans[ind]=ans[ind]+ans[ind-1];
        for(int ind = 0;ind < sz;ind++)
        {
            if(ans[ind] > capacity) return false; // while calc prefix if my ans[ind] exceeds then simply return false;
        }
        return true;
    }
};