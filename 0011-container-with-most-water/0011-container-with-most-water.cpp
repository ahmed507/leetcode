class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = 0,i=0,j=height.size()-1;
        while(j>i){
            m = max((j-i)*min(height[i],height[j]),m);
            if(height[i]<height[j])++i;
            else --j;
        }
        return m;
        
    }
};