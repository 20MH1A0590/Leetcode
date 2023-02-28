class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        // find func in cpp
        // find will gives the  first occurence substring of the string.
        int cnt=0;
        for(auto word : words)
        {
            if(s.find(word)==0) cnt++;
        }
        return cnt;
    }
};
