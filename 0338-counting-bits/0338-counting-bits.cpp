class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i;
        for(i = 0;n;i++)n&=n-1;
        return i;
    }

    vector<int> countBits(int n) {
        vector<int> out;
        for (int i=0;i<=n;i++)out.push_back(hammingWeight(i));
        return out;
        
    }
};