class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto &it : nums) mp[it]++;
        nums.clear();
        for(auto &it : mp) nums.push_back(it.first);
        return nums.size(); 
    }
};