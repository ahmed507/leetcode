class Solution {
public:
vector<vector<int>>rotateHelper(vector<vector<int>>& matrix) {
    int s = matrix[0].size();
    vector<vector<int>> out(s, vector<int>(s, 0));
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            out[j][s - i - 1] = matrix[i][j];
        }
    }
    return out;
}
void rotate(vector<vector<int>>& matrix) {
    matrix = rotateHelper(matrix);
}};