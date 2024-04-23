class Solution {
public:
int maxCrossingSubarraySum(const vector<int>& nums, int left, int mid, int right) {
    int leftSum = INT_MIN;
    int rightSum = INT_MIN;
    int sum = 0;

    for (int i = mid; i >= left; i--) {
        sum += nums[i];
        if (sum > leftSum) {
            leftSum = sum;
        }
    }

    sum = 0;
    for (int i = mid + 1; i <= right; i++) {
        sum += nums[i];
        if (sum > rightSum) {
            rightSum = sum;
        }
    }

    return leftSum + rightSum;
}

int maxSubArrayHelper(const vector<int>& nums, int left, int right) {
    if (left == right) {
        return nums[left];
    }

    int mid = left + (right - left) / 2;

    int leftMax = maxSubArrayHelper(nums, left, mid);
    int rightMax = maxSubArrayHelper(nums, mid + 1, right);
    int crossMax = maxCrossingSubarraySum(nums, left, mid, right);

    return max({leftMax, rightMax, crossMax});
}

int maxSubArray(vector<int>& nums) {
    if (nums.empty()) {
        return INT_MIN;
    }
    return maxSubArrayHelper(nums, 0, nums.size() - 1);
}


};