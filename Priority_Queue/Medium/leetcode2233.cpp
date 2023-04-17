class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
    //fastio
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int>pq;
    for(auto &num : nums) pq.push(num * -1);
    int mod = pow(10,9) + 7;
    int prod = 1;
    while(k--)
    {
        int d = pq.top()-1;
        pq.pop();
        pq.push(d);
    }
    while(!pq.empty()){
        prod = (1ll*prod*(pq.top()*-1)) % mod;
        pq.pop();
    }
    return prod;
    }
};