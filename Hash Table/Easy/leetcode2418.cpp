class Solution {
public:
    static bool comp(pair<string,int>&a,pair<string,int>&b)
    {
        return a.second > b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>ans;
        int k = names.size();
        for(int i = 0;i < k;i++)
        {
            ans.push_back({names[i],heights[i]});
        }
        sort(ans.begin(),ans.end(),comp);
        vector<string>res;
        for(int i = 0;i < ans.size();i++) res.push_back(ans[i].first);
        return res;
    }
};
