class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     int mini=prices[0];
     int profit;
     int maxprofit=0;
     for(int i=0;i<n;i++){
        profit=prices[i]-mini;
        maxprofit=max(profit,maxprofit);
        mini=min(mini,prices[i]);
     } 
     return maxprofit;  
    }
};