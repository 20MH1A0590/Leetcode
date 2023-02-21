class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // simple using bitwise XOR 
        // start with res=0
        //apply bitwise XOR for all the numbers in a vector.
        //at last it will gives the res equal to single number in a vector..
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res=res^nums[i];
        }
        return res;
    }
};