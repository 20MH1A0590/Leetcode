class Solution {
public:
    //  using STL function {pair}
    static bool comp(pair<int,int>&a, pair<int,int>&b) 
    {
        if(a.second > b.second) return true;
        return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto &it : nums) mp[it]++;
        vector<pair<int,int>>ans(mp.begin(),mp.end());
        // sort according to the highest freq;
        sort(ans.begin(),ans.end(),comp);
        vector<int>res;
        int i = 0;
        while(k--)
        {
            res.push_back(ans[i].first);
            i++;
        }
        return res;
    }
};