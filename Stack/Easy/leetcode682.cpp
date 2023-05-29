class Solution {
public:
    int calPoints(vector<string>& operations) {
        // No need any stack datastructure to solve this problem.
        // we can use vector as stack because vector also have stack properties..
        int k = operations.size();
        vector<int>ans;
        for(int i = 0; i < k; i++)
        {
            if(operations[i] == "C") ans.pop_back();
            else if(operations[i] == "D") ans.push_back(2*(ans[ans.size()-1]));
            else if(operations[i] == "+") ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
            else ans.push_back(stoi(operations[i])); 
        }
        int res = 0;
        for(int i = 0; i < ans.size(); i++) res += ans[i];
        return res;

        //Using stack 
        // stack<int>st;
        // for(int i = 0; i < operations.size() ; i++)
        // {
        //     if(operations[i] == "C") st.pop();
        //     else if(operations[i] == "D") st.push(2 * st.top());
        //     else if(operations[i] == "+")
        //     {
        //         int tp1 = st.top();
        //            st.pop();
        //            int tp2 = st.top();
        //            st.push(tp1);
        //            st.push(tp1+tp2);
        //     }
        //     else st.push(stoi(operations[i]));
        // }
        // int t = 0;
        // while(!(st.empty()))
        // {
        //     t += st.top();
        //     st.pop();
        // }
        // return t;

    }
};
