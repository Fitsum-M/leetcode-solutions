class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int> arr(n+1);
        arr[1]=1,arr[2]=2;
       for(int i=3;i<=n;i++){ 
           arr[i]=arr[i-2]+arr[i-1];
       }
       return arr[n]; 
    }
};