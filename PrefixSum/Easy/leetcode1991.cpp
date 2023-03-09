class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        // simple caluculating prefix and comparing leftsum==rightsum of each and every element.
        int k=nums.size();
        vector<int>pref(k+1,0);
        for(int i=1;i<=k;i++) pref[i]=pref[i-1]+nums[i-1];
        for(int ind=1;ind<pref.size();ind++)
        {
            if(pref[k]-pref[ind-1]==pref[ind]) return ind-1;
        }
        return -1;
    }
};