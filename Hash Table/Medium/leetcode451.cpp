class Solution {
public:
    string frequencySort(string s) {
        // using max Heap + hashmap
        map<char,int>mp;
        for(auto &it : s) mp[it]++;
        priority_queue<pair<int ,char>>pq;
        for(auto &k : mp)
        {
            pq.push({k.second,k.first});
        }
        string ans = "";
        while(!pq.empty())
        {
            // appending pq.top().second times to the empty string
            ans.append(pq.top().first , pq.top().second);
            //cout<<pq.top().first<<" "<<pq.top().second<<" ";
            pq.pop();
        }
        return ans;
    }
};