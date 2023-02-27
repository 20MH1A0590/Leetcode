class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>ve(nums.size()+2,0);
        int n=nums.size();
        for(int i=1;i<=nums.size();i++){
            ve[i]=ve[i-1]+nums[i-1];
        }
        for(int i=1;i<=nums.size();i++){
            if(ve[n]-ve[i]==ve[i-1]) return i-1;
        }
        return -1;
    }
};