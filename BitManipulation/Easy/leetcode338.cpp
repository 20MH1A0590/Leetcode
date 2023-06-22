class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int set_bits(int num)
    {
        int cnt = 0;
        while(num > 0)
        {
            if((num & 1) == 1) cnt++;
            num = num >> 1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i = 0; i <= n; i++) res.push_back(set_bits(i));
        return res;
    }
};
