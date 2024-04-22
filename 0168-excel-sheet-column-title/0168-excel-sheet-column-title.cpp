class Solution {
public:

    string helper(int columnNumber) {
        if (columnNumber < 0) return "";
        return helper(columnNumber / 26 - 1) + static_cast<char>(('A' + (columnNumber % 26)));

    }

    string convertToTitle(int columnNumber) {
        --columnNumber;
        return helper(columnNumber);
    }
};