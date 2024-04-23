class Solution {
public:
    int memo[47];

int climbStairsHelper(int n) {
    if (n <= 1) return n;
    if (memo[n] != 0)return memo[n];
    else {
        memo[n] = climbStairsHelper(n - 1) + climbStairsHelper(n - 2);
        return memo[n];
    }

}

int climbStairs(int n) {
    return climbStairsHelper(n + 1);
}

};