class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            bool found=false;
            int sum=0;
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    sum=prices[i]-prices[j];
                    ans.push_back(sum);
                    found=true;
                    break;
                }
            }
            if(!found){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};