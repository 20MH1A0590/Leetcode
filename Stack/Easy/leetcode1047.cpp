class Solution {
public:
    string removeDuplicates(string s) {
        //fastio
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        stack<char>st;
        for(auto &c : s)
        {
            if(st.empty() || c != st.top()) st.push(c);
            else st.pop();
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
