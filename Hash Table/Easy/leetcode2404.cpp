class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    static bool compp(pair<int,int>&a , pair<int,int>&b)
    {
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    }
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it : nums) mp[it]++;
        vector<pair<int,int>>pairs;
        for(auto & k : mp)
        {
            pairs.push_back({k.first,k.second});
        }
        sort(pairs.begin(),pairs.end(),compp);
        for(auto & p : pairs)
        {
            if(p.first%2==0) return p.first;
        }
        return -1;
    }
};S