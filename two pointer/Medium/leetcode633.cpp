class Solution {
public:
    bool judgeSquareSum(int c) {
        // running a loop upto sqrt(c) is enough..
        long long int i = 0, j = sqrt(c);
        while(i <= j)
        {
            if((i*i)+(j*j) == c) return true;
            else if((i*i)+(j*j) < c) i++;
            else j--;
        }
        return false;
    }
};
