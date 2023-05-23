class KthLargest {
public:
    // max heap
    priority_queue<int>pq;
    int s;
    KthLargest(int k, vector<int>& nums) {
        s = k;
        for(int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i] * -1);
        }
    }   
    int add(int val) {
        pq.push(val * -1);
        while(pq.size() > s)
        {
            pq.pop();
        }
        return pq.top() * -1;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
