class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int n=nums.size();
       int i=0; int cnt=0,j=0;
       while(j<n){
        if(nums[i]==val){
            for(int j=i+1;j<n;j++){
                nums[j-1]=nums[j];
            }
        }
        else{
          cnt++; i++;
        }
        j++; 
       }
       return cnt; 
    }
};