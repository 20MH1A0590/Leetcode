class Solution {
public:
    // logic is simple 
    // apply two pointer algorithm and multiplying the first value*pow(10, last value total digits)+last value
    // for Example 2 : [5,14,13,8,12]
    //  with 5 and 12 to get 512 then 5*(100)+12
    // here 100 is pow(10,2) and 2 is the total digits of 12
    int t_digits(long long int num)
    {
        return int(log10(num))+1;
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        long long int f=0,l=nums.size()-1,sum=0;
        while(f<=l)
        {
            if(f==l) sum+=nums[f];
            else sum+=nums[f]*pow(10,t_digits(nums[l]))+nums[l];
            f++;
            l--;
        }
        return sum;
    }
};
