class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;

        for (int i = 1; i < arr.size(); i++) {
            ans.push_back(*max_element(arr.begin()+i, arr.end()));
        }
        ans.push_back(-1);
        return ans;
        
    }
};