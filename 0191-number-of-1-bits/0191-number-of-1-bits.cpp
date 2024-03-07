class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i;
        for(i = 0;n;i++)n&=n-1;
        return i;
    }
};