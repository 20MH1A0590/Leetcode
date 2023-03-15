class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        for(auto &it : bookings)
        {
            ans[it[0]-1] += it[2]; //adding seats to the range
            if(it[1] < n) ans[it[1]] -= it[2]; // removing seats from the range
        }
        for(int i = 1 ;i < n; i++)
        {
            ans[i] = ans[i]+ans[i-1];
        }
        return ans;
    }
};