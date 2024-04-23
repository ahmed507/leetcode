class Solution {
public:
int maxSubArray(vector<int>& nums) {
    if (nums.size() == 0) return INT_MIN + 1;
    int max_so_far = nums[0];
    int current_max = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        current_max = max(nums[i], current_max + nums[i]);
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}

};