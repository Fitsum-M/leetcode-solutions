class Solution {
public:
    int countHillValley(vector<int>& nums) {
       vector<int>arr;
       int count=0;
       arr.push_back(nums[0]);
       for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            arr.push_back(nums[i]);
        }

       }
       int n=arr.size();
       for(int i=1;i<n-1;i++){
           if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                   count++;
           }    
    else if (arr[i] < arr[i-1] && arr[i] < arr[i+1]){
           count++;
    }  
       }
   return count;
    }
};