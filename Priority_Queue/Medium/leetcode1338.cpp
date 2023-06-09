class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    int minSetSize(vector<int>& arr) {
        map<int,int>Freq;
        for(int i = 0; i < arr.size(); i++)
        {
            Freq[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto &it : Freq)
        {
            pq.push(it.second);
        }
        int set_size = 0, count = 0;
        while(!(pq.empty()))
        {
            count += pq.top();
            set_size++;
            pq.pop();
            if(count >= arr.size()/2) return set_size;
        }
        return -1;
    }
};
Console
