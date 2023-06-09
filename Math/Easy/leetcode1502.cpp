class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int c_diff = arr[1]-arr[0];
        for(int i = 2; i < arr.size(); i++)
        {
            if((arr[i] - arr[i-1]) != c_diff) return false;
        }
        return true;
    }
};
