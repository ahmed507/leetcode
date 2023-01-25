class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>out(nums.size());
        int zeros = count(nums.begin(),nums.end(),0);
        long long int s=1;
        for (int i = 0; i < nums.size(); ++i){
            if(nums[i]!=0)s*=nums[i];
        }
        if(zeros==1){
            for(int i = 0; i < nums.size(); ++i){
                if(nums[i]!=0){
                    out[i]=0;
                }
                else{
                    out[i]=s;
                }
            }
        }
        else if(zeros>1){
            return vector<int>(nums.size());
        }
        else{
            for(int i = 0; i < nums.size(); ++i){
                out[i]=(int)s/nums[i];
            }
        }
        return out;    
    }
};