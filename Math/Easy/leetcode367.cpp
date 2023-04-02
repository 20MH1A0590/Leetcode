class Solution {
public:
    bool isPerfectSquare(int num) {
        //Bruteforce method
        for(long long int ind = 1; ind*ind <= num; ind++)
        {
            if(1ll*ind*ind == num) return true;
        }
        return false;
    }
};