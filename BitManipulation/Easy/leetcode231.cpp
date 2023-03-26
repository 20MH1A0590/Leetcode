class Solution {
public:
    bool isPowerOfTwo(int n) {
        // simple bit manipulation 
        // for every power of two there is only one set bit.
        if(n <= 0) return false;
        int total_1bits = __builtin_popcount(n);
        return total_1bits == 1;
    }
};