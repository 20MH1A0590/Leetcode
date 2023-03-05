class Solution {
public:
    long long coloredCells(int n) {
        // simple maths..
        // for every step of n, the color cells are increasing with the mutliple of 4 like {4,8,12,16,......}.
        // sequence: for n=1   n=2   n=3   n=4   n=5
        // output:        1     5    13    25    41
        long long int sum=1,i=0;
        while(n)
        {
            sum+=4*i;
            n--;
            i++;
        }
        return sum;
    }
};