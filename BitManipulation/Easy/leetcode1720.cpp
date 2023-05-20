class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin()+0, first);
        for(int i = 1; i < encoded.size(); i++)
        {
            encoded[i] = encoded[i] ^ encoded[i-1];
        }
        return encoded;
    }
};
