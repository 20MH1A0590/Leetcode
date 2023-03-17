class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<int> findLonely(vector<int>& nums) {
    vector<int>ans;
    map<long long,long long>mp;
    for(auto &it : nums) mp[it]++;
    for(auto &it : mp)
    {
        if(mp.find(it.first+1) == mp.end() && mp.find(it.first-1) == mp.end() && it.second == 1) ans.push_back(it.first);
    }
    return ans;

    }
};