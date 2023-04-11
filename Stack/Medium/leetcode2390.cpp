class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        //st.push('*');
        for(int i = 0; i < s.size() ; i++)
        {
            if(s[i] == '*' && st.top() != '*' && !(st.empty())) st.pop();
            else st.push(s[i]);
        }
        s.clear();
        while(!(st.empty()))
        {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};