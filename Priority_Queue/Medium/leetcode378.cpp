class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i = 0, j = 0, m = matrix.size();
        priority_queue<int>pq;
        while(i < m && j < m)
        {
            pq.push(matrix[i][j] * -1);
            if(j == m-1)
            {
                i++;
                j = 0;
            }
            else
            {
                j++;
            }
        }
        int start = 0;
        while(!(pq.empty()))
        {
            start ++;
            if(start == k) return pq.top()*-1;
            pq.pop();
        }
        return -1;
    }
};
