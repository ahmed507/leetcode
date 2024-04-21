class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int out = nums.front();
      for (int i = 1;i<nums.size();i++) {
          out ^= nums[i];
      }
      return out;
    }
};