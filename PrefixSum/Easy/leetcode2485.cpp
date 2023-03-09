class Solution {
public:
    int pivotInteger(int n) {
      // This problem is similar to leetcode 724:{Find Pivot Index}
      vector<int>prefix(n+1,0);
      int Currsum=0;
      for(int i=1;i<=n;i++)
      {
          Currsum+=i;
          prefix[i]=Currsum;
      }
      for(int ind=1;ind<=n;ind++)
      {
          int PrevIndex=ind-1;
          if(prefix[n]-prefix[PrevIndex]==prefix[ind]) return ind;
      }
      return -1;
    }
};