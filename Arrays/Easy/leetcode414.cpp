class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int>mp;
        for(auto & it : nums) mp[it]++;
        priority_queue<int>pq;
        for(auto &it : mp) pq.push(it.first); 
        if(mp.size() < 3) return pq.top();
        else
        {
            int top = 2;
            while(top--) pq.pop();
        }
        return pq.top();
    }
};