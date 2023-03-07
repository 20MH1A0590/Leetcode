class Solution {
public:
    int longestPalindrome(string s) {
        //hash_table problem {solution : dev}
        // take boolean value as false
        // iterate over map and if occurence is even then directly add to sum variable, if it is odd then add (occurence-1) to sum and set bool to true.
        // if it is true, then it says that atleast one odd occurence exist
        // if odd occurence exists in the map return sum+1;
        // otherwise return sum; 
        map<char,int>mp;
        bool found=false;
        for(auto &it : s) mp[it]++;
        int sum=0;
        for(auto it : mp)
        {
            if(it.second%2) {sum+=it.second-1;found=true;}
            else sum+=it.second;
        }
        if(found==true) return sum+1;
        else return sum;
    }
};