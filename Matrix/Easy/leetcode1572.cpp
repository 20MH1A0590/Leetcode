class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int f_i=0,f_j=0;
        int sum=0;
        while(f_i<mat.size())
        {
            sum+=mat[f_i][f_j];
            f_i++;
            f_j++;
        }
        int s_i=0,s_j=mat.size()-1;
        while(s_i<mat.size())
        {
            sum+=mat[s_i][s_j];
            s_i++;
            s_j--;
        }
        if(mat.size()%2) sum-=mat[mat.size()/2][mat.size()/2]; //in case if matrix size is odd then we need to substract middle element of matrix.
        return sum;
    }
};