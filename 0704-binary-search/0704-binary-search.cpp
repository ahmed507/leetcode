class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m;
        while(r>=l){
            if((r+l)%2==0)m = (r+l)/2;
            else m = (r+l+1)/2;
            if(nums[m]==target)return m;
            else if(nums[m]>target)r=m-1;
            else l=m+1;
        }
        return -1;
    }
};