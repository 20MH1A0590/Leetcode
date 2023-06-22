// this problem also can be solve using heap but this is the solution using map

class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int>desc(score);
       sort(desc.begin(),desc.end(),greater<>());
       map<int,string>Freq;
       for(int i = 0; i < desc.size(); i++)
       {
           if(i > 2) Freq[desc[i]] = to_string(i+1);
           else if(i == 0) Freq[desc[i]] = "Gold Medal";
           else if(i == 1) Freq[desc[i]] = "Silver Medal";
           else if(i == 2) Freq[desc[i]] = "Bronze Medal"; 
       }
        vector<string>res;
        for(int i = 0; i < score.size(); i++)
        {
            res.push_back(Freq[score[i]]);
        }
        return res;
    }
};
