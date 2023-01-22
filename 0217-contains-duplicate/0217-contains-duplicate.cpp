class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> n(nums.begin(),nums.end());
        if(nums.size()==n.size()){
            return false;
        }
        return true;
    }
};