class Solution {
public:
    bool acceptable(string s,string &allowed)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(allowed.find(s[i]) == string::npos) return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        for(int i = 0; i < words.size(); i++)
        {
            if(acceptable(words[i], allowed)) cnt++;
        }
        return cnt;
    }
};
