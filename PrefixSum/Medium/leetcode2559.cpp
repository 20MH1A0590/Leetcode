class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool contains_vowel(string s)
    {
        int n = s.size();
        if((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') && (s[n-1]== 'a' || s[n-1] == 'e' || s[n-1] == 'i' || s[n-1] == 'o' || s[n-1] == 'u')) return true;
        else return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int k = words.size();
        vector<int>res(k+1,0);
        for(int i = 0; i < k; i++)
        {
            if(contains_vowel(words[i])) res[i+1] = 1;
        }
        for(int i = 1; i < res.size(); i++) res[i] = res[i] + res[i-1];
        vector<int>ans;
        for(int i = 0; i < queries.size(); i++)
        {
            ans.push_back(res[queries[i][1]+1]-res[queries[i][0]]);
        }
        return ans;
    }

}; 
