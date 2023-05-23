class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i = 0; i < nums1.size(); i++) mp1[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++) mp2[nums2[i]]++;
        vector<int>ans1;
        vector<int>ans2;
        for(auto it : mp1)
        {
            if(mp2.find(it.first) == mp2.end()) ans1.emplace_back(it.first);
        }
        for(auto it : mp2)
        {
            if(mp1.find(it.first) == mp1.end()) ans2.emplace_back(it.first);
        }
        return {ans1,ans2};
    }
};
