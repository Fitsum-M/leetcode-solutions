class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
       int n=nums.size();
       int diff=0;
       for(int i=0;i<n;i++){
        int currdiff;
        if(i==n-1){
            currdiff=abs(nums[n-1]-nums[0]);
        }
        else{
        currdiff=abs(nums[i]-nums[i+1]);
        }
        diff=max(diff,currdiff);
       } 
   
       return diff;
    }
};