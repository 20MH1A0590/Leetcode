class Solution {
public:
    //Bruteforce Approach
    bool isok(string st)
    {
        int i = 0,j = st.size()-1;
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
        {
            if(st[j]=='a' || st[j]=='e' || st[j]=='i' || st[j]=='o' || st[j]=='u') return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0 ;
        for(int ind = left;ind<=right ; ind++)
        {
            if(isok(words[ind])) cnt++;
        }
        return cnt;
    }
};