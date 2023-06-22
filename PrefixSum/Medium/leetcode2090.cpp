class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long >pref(n+1,0);
        for(int i = 1; i <= n; i++) pref[i] = pref[i-1] + nums[i-1];
        //for(int i = 0; i < pref.size(); i++) cout << pref[i]<<" ";
        vector<int>ans(n,-1);
        int w_size = 2 * k + 1;
        for(int i = k; i + k < n; i++)
        {
            ans[i] = (pref[i+k+1]-pref[i-k])/w_size;
        }
        return ans;
    }
};
