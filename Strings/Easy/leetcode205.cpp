class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        set<int>s1;
        set<int>s2;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else mp[s[i]]=t[i];
        }
        for(int i=0;i<s.size();i++){
            s1.insert(s[i]);
            s2.insert(t[i]);
        }
        if(s1.size()!=s2.size()) return false;
        return true;
    }
};