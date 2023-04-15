class Solution {
public:
    bool bs(int ele,vector<int>&target)
    {
        int lo = 0, hi = target.size()-1,mid;
        while(lo <= hi)
        {
            mid = (lo+hi) >> 1;
            if(target[mid] == ele) return true;
            else if(target[mid] > ele) hi = mid-1;
            else lo = mid+1;
        }
        return false;
    }
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        for(int num = 1; num <= n, num <= target[target.size()-1];num++)
        {
            ans.push_back("Push");
            if(!(bs(num,target)))
            {
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};