class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // In the Constraints there are no negative numbers given so we can use max heap;
        priority_queue<int>pq;
        for(auto &num : nums) pq.push(num);
        int f_top = pq.top();
        pq.pop();
        int s_top = pq.top();
        return (f_top-1)*(s_top-1);
    }
}
