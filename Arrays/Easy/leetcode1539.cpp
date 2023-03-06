class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans(10001,0);
        int s=arr.size(),p=ans.size(),start=0,store;
        for(auto &it : arr)
        {
            ans[it]=1;
        }
        for(int i=1;i<p;i++)
        {
            if(ans[i]==0) start++;
            if(start==k)
            {
                store=i;
                break;
            }
        }
        return store;
    }
};