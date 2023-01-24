class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(auto str : strs){
            string tmp = str;
            sort(str.begin(),str.end());
            map[str].push_back(tmp);
        }
        vector<vector<string>> result;
            for (const auto& [key, value] : map) {
                result.push_back(value);
            }
            return result;


    }
};