class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> minTillI(n);
        minTillI[0] = prices[0];
        int ans = 0;
        for(int i=1;i<n;i++){
            minTillI[i] = min(prices[i],minTillI[i-1]);
        }
        for(int i=0;i<n;i++){
            ans = max(ans,prices[i] - minTillI[i]);
        }
        return ans;
        
    }
};