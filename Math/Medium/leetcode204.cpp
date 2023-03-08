class Solution {
public:
    int countPrimes(int n) {
        // simple sieve eratosthenes algorithm 
        if(n<=1) return 0;
        vector<long long int>primes(n,1);
        for(long long int i=2;i<n;i++)
        {
            if(primes[i]==1)
            {
                for(long long int j=i*i;j<n;j+=i)
                {
                    primes[j]=0; // initializes i multiples to 0 
                }
            }
        }
        long long int cnt=0;
        for(long long int i=2;i<n;i++)
        {
            if(primes[i]==1) cnt++;
        }
        return cnt;
    }
};