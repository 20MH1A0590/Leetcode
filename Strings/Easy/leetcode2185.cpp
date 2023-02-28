class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        // substr function 
        int k=pref.size(),cnt=0;
        for(auto word : words)
        {
            if(word.substr(0,k)==pref) cnt++;
        }
        return cnt;
    }
};