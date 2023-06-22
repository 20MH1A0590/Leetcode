class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(string passenger : details)
        {
            int num = (passenger[11]-'0')*10 + passenger[12]-'0';
            cout  << num;
            if(num > 60) cnt++;
        } 
        return cnt;
    }
};
