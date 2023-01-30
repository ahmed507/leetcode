class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> out(temperatures.size(),0);
        for (int i = temperatures.size() - 1; i >= 0; --i) {
            int j = i+1;
            while (j < temperatures.size() && temperatures[j] <= temperatures[i]) {
                if (out[j] > 0) j = out[j] + j;
                else j = temperatures.size();
            }
            if (j < temperatures.size()) out[i] = j - i;
        }
        return out;
    }
};