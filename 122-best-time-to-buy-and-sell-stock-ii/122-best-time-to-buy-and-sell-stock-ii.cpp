class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prevMin = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] > prevMin){
                profit += prices[i] - prevMin;
                prevMin = prices[i];
            }
            else prevMin = min(prevMin,prices[i]);
        }
        return profit;
    }
};