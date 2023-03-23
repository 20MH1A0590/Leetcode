class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // simple maxHeap
        priority_queue<int>pq;
        for(auto &it : nums) pq.push(it);
        while(k > 1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};S