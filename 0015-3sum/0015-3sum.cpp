class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>out;
        vector<int>o(3);
        // nums.erase(unique(nums.begin(), nums.end()), nums.end());
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size()-2; ++i) {
            int left = i+1;
            int right = nums.size()-1;
            o[0]=nums[i];
            while (left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    o[1]=nums[left];
                    o[2]=nums[right];
                    out.push_back(o);
                    while (left<right&&nums[left]==o[1]) ++left;
                    while (left<right&&nums[right]==o[2]) --right;
                }
                else if(nums[i]+nums[left]+nums[right]>0)--right;
                else ++left;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;


        }
        out.erase(unique(out.begin(), out.end()), out.end());
        return out;
    }

};