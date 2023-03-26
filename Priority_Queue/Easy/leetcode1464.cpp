class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto &num : nums) pq.push(num);
        int f_top = pq.top();
        pq.pop();
        int s_top = pq.top();
        return (f_top-1)*(s_top-1);
    }
};