class Solution {
public:
    int kItemsWithMaximumSum(long long int numOnes, long long int numZeros, int numNegOnes, long long int k) {
        if(numOnes >= k) return k;
        long long int sum = 0;
        while(k)
        {
            sum += numOnes;
            k = k-numOnes;
            if(k >= numZeros)
            {
                sum += numZeros*0;
                k -= numZeros;
                if(k > 0)
                {
                    while(k--) sum --;
                    break;
                }
            }
            else break;
        }
        return sum;
    }
};