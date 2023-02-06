class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>out(nums.size());
        for(int i=0,j=0;j<nums.size()-1,i<n;i++,j+=2){
            out[j]=nums[i];
            out[j+1]=nums[i+n];
        }    
        return out;
    }
};