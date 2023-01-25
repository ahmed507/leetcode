class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>out;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();++i){
            ++map[nums[i]];
        }
        vector<pair<int,int>>m;
        for(auto i:map){
            m.push_back(make_pair(i.second, i.first));
        }
        sort(m.rbegin(),m.rend());
        for(int i=0;i<k;++i){
            out.push_back(m[i].second);
        }

        return out;
        
    }
};