class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    static bool compp(pair<int,int>&a, pair<int,int>&b)
    {
        if(a.second == b.second) return a.first > b.first;
        return a.second < b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>Freq;
        for(auto &it : nums) Freq[it]++;
        vector<pair<int,int>>pairs;
        for(auto &k : Freq) 
        {
            pairs.push_back({k.first, k.second});
        }
        sort(pairs.begin(),pairs.end(),compp);
        vector<int>ans;
        for(int i = 0; i < pairs.size();i++)
        {
            int p = pairs[i].second;
            // adding p times the number into an ans vector
            while(p--) ans.push_back(pairs[i].first);
        }
        return ans;
    }
};