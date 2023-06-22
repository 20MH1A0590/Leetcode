class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size()-1; i++)
        {
            for(int j = 0; j < matrix[i].size()-1; j++)
            {
                if(matrix[i][j] != matrix[i+1][j+1]) return false;
            }
        }
        return true;
    }
};
