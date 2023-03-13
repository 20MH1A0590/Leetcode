class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sz = nums.size();
        map<int,int>mp;
        mp[0]=1;
        int Currsum = 0,total = 0;
        for(auto it : nums)
        {
            Currsum += it;
            int rem = Currsum-k;
            if(mp.find(rem)!=mp.end())
            {
                total += mp[rem];
            }
            mp[Currsum] +=1; 
        }
        //for(auto &i : mp ) cout<<i.first<<" "<<i.second<<"\n";
        
        return total;
    }
};