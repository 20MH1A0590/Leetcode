class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>()); //sorting according to the larger value.
        int total=0;
        for(int i=0;i<cost.size();i++)
        {
            if((i+1)%3!=0) total+=cost[i]; // index starts with 0 but accordig to this checking with ind 1.
            //if (i+1) is not a multiple of 3 then we can add the candy cost to total.
        }
        return total;
    }
};