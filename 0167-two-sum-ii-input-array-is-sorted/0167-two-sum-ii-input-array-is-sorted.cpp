class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i <= j) {
            if (target - numbers[j] == numbers[i])return {i+1, j+1};
            else if(target-numbers[j]<numbers[i])--j;
            else ++i;
        }
        return {};
    }
};