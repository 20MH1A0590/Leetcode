class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    static bool compp(pair<string,int>&a, pair<string,int>&b)
    {
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto &it : words) mp[it]++;
        vector<pair<string,int>>ans(mp.begin(),mp.end());
        sort(ans.begin(),ans.end(),compp);
        vector<string>res;
        int start = 0;
        while(k--)
        {
            res.push_back(ans[start].first);
            start++;
        }
        return res;
    }
};