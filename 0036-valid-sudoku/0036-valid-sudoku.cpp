class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            const int N = 9;
    unordered_map<char,int> map;
    for (int i = 0; i < N; i += 3) {
        for (int j = 0; j < N; j += 3) {
            map.clear();
            for (int k = i; k < i + 3; k++) {
                for (int l = j; l < j + 3; l++) {
                    if(board[k][l]!='.')++map[board[k][l]];
                    if(map[board[k][l]]>1)return false;
                }
            }
            cout<<endl;
            
        }
    }
    

    for (int i = 0; i < N; i++) {
        map.clear();
        for (int j = 0; j < N; j++) {
            if(board[i][j]!='.')++map[board[i][j]];
            if(map[board[i][j]]>1){
                
                return false;
            }
        }
    }
    
    for (int j = 0; j < N; j++) {
        map.clear();
        for (int i = 0; i < N; i++) {
            if(board[i][j]!='.')++map[board[i][j]];
            if(map[board[i][j]]>1)return false;
        }
    }
    return true;
}

};