class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s=="") return true;
        while(j<t.size() and i<s.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                if(j==t.size()-1) return false;
                else j++;
            }
        }
        if(i!=s.size()) return false;
        return true;
    }
};