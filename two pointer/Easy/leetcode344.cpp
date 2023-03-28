class Solution {
public:
    void reverseString(vector<char>& s) {
        // single pointer is enough to access the last most elements by k-ind-1;
        int ind = 0;
        int k = s.size();
        while(ind < k/2)
        {
            swap(s[ind],s[k-ind-1]);
            ind++;
        }
    }
};