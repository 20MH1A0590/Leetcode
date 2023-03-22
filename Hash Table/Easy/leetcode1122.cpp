class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>Freq;
        for(auto &n : arr1) Freq[n]++;
        vector<int>ans;
        for(auto &i : arr2)
        {
            while(Freq[i]--)
            {
                ans.push_back(i);
            }
            Freq.erase(i);
        }
        // uncommon elements remaining in arr1
        for(auto &it : Freq)
        {
            while(it.second--) ans.push_back(it.first);
        }
        return ans;
    }
};