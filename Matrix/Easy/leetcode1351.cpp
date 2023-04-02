class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int i = 0, j = 0;
       int k = grid.size();
       int m = grid[0].size();
       int cnt = 0;
       while(i < k && j < m) 
       {
           bool flag = false;
           if(grid[i][j] < 0) cnt++;
           if(j == m-1) {i++; j = 0; flag = true;}
           if(!(flag)) j++;
       }
       return cnt;
    }
};