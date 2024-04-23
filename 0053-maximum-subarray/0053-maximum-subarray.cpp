class Solution {
public:
int maxSubArrayRecursive(vector<int>& nums, int start, int end, vector<int>& memo) {
    if (start > end) return INT_MIN;
    if (start == end) return nums[start];
    if (memo[start] != -1) return memo[start];
    int max_so_far = nums[start];
    int current_max = nums[start];
    for (int i = start + 1; i <= end; i++) {
        current_max = max(nums[i], current_max + nums[i]);
        max_so_far = max(max_so_far, current_max);
    }
    memo[start] = max_so_far;
    return max_so_far;
}

int maxSubArray(vector<int>& nums) {
    if (nums.size() == 0) return INT_MIN + 1;
    vector<int> memo(nums.size(), -1);
    return maxSubArrayRecursive(nums, 0, nums.size() - 1, memo);
}

};