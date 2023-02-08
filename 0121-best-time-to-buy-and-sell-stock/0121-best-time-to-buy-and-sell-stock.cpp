class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mn = prices[0];
        for(int i=0;i<prices.size()-1;i++){
            int j = i+1;
            mn = min(mn,prices[i]);
            profit = max(prices[j]-mn,profit);
        }
        return profit;
    }
};