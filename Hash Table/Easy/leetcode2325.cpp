class Solution {
public:
    string decodeMessage(string key, string message) {
        //fastio
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string atoz = "abcdefghijklmnopqrstuvwxyz";
        map<char,char>mp;
        int i = 0,start = 0;
        while(i < key.size())
        {
            if(mp.find(key[i]) == mp.end() && key[i] != ' ') 
            {
                mp[key[i]] = atoz[start];
                start++;
                i++;
            }
            else i++;
        }
        string res = "";
        for(auto &mes : message)
        {
            if(mes == ' ') res.push_back(' ');
            else res.push_back(mp[mes]);
        }
        return res;
    }
};