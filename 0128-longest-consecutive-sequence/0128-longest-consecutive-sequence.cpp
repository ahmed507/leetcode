class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mx=1,cnt=1;
        map<int,int>m;
        for (int i = 0; i < nums.size(); i++){
            ++m[nums[i]];
        }
        if(m.size()<2)return m.size();
        auto last = m.begin();
        for (auto i = next(m.begin()); i != m.end(); i++){
            if(i->first-last->first==1){
                ++cnt;
                mx = max(cnt,mx);
            }
            else cnt=1;

            last = i;
        }
        return mx;
    }
};