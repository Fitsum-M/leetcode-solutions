class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int d=n/3;
        int sum=0;
        int i=n-2;
        sort(piles.begin(),piles.end());
        while(d>0){
             sum+=piles[i];
             i=i-2;
             d--;
        }
        return sum;
    }
};