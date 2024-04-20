class Solution {
public:

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    set<int> splited_set;
    for (int i = 0; i < nums.size(); ++i) {
        if (i > k) {
            splited_set.erase(nums[i-k-1]);
        }
        if(splited_set.find(nums[i]) != splited_set.end()) {
            return true;
        }
        splited_set.insert(nums[i]);
    }
    return false;
}};