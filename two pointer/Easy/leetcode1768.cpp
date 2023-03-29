class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();
        string ans = "";
        int k = min(s1,s2);
        int i = 0,j = 0;
        while(k--)
        {
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        if(s1 > s2) ans += word1.substr(s2,s1);
        else if(s1 < s2) ans += word2.substr(s1,s2);
        return ans;
    }
};  
