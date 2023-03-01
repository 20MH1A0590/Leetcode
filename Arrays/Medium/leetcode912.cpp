class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>pq;
        vector<int>ve;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]*-1);
        }
        while(!pq.empty()){
            ve.push_back(pq.top()*-1);
            pq.pop();
        }
        return ve;
    }
};