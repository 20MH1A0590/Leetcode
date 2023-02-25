class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // for Input : s = "codeleet", indices = [4,5,6,7,0,2,1,3]
        // initially declare all 0's.
        //        [0,0,0,0,0,0,0,0]
        // step1: [        c      ]
        // res :   0,1,2,3,4,5,6,7

        // step2: [          o    ]
        //res  :   0,1,2,3,4,5,6,7
        // simply we are replacing 0 with the respective char.
        string ans="";
        vector<char>res(s.size(),0);
        for(int i=0;i<s.size();i++)   res[indices[i]]=s[i];
        for(int i=0;i<res.size();i++) ans+=res[i];
        return ans;
    }
};