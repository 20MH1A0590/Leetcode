class Solution {
public:
    // approach :  BinarySearch + twopointers
    // first sort the potions vector and apply binary search on the potions vector
    // this will neglects some space, according to the condition it will returns the potions.size()-1-hi value
    // this says that that many elements in the potions vector is >= success
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    int BestIndex(int ele,vector<int>&potions,long long success)
    {
      int lo = 0, hi = potions.size()-1, mid;
      while(lo <= hi)
      {
        mid = (lo + hi) >> 1;
        if( 1ll * ele * potions[mid] >= success) hi = mid-1;
        else lo = mid+1;
      }
      return potions.size()-1-hi;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(auto &it : spells)
        {
          ans.push_back(BestIndex(it,potions,success));
        }
        return ans;
    }
};