#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
        //***This problem is similar to leetcode 136
        // logic is simple using bit manipulation 
        // statement says that given a sorted array of integers and all elements that appears exactly twice except one element
        // For Example 1 :  [1,1,2,3,3,4,4,8,8]
        // step 1: apply Bitwise XOR for first two numbers i.e 1^1=0
        // step 2: when res==0 then res=nums[i+1] i.e nums[2]=2
        // step 3: i points to the nums[i+2]
        // step 4: if res!=0 then your single will be nums[i-1] i.e nums[3-1]=nums[2]=2
        // step 5: store single number and break the loop and return single number.
        long long int res = nums[0];
        int i=1,single_num;
        if(nums.size()==1) return nums[0];
        while(i<nums.size())
        {
            res=res^nums[i];
            if(res==0)
            {
                res=nums[i+1];
                i=i+2;
            }
            else
            {
                single_num=nums[i-1];
                break;
            }
        }
        return single_num;
    }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
return 0;	
}