 int k=gain.size();
  // solution 1: using prefix :

        vector<int>prefix(k+1,0);
        for(int i=1;i<=k;i++)
        {
            int PrevIndex=i-1;
            prefix[i]=prefix[PrevIndex] + gain[PrevIndex];
        }
        int highest  = -1000;
        for(int i=0;i<=k;i++)
        {
            if(prefix[i] > highest) highest = prefix[i];
        }
        return highest;

   // solution 2 : compare max(Currsum , 0)
        class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0,res = 0;
        for(auto &it: gain)
        {
            sum+=it;
            res = max(sum , res);
        }
        return res;
    }
};