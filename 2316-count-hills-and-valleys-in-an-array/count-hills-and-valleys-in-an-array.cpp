class Solution {
public:
    int countHillValley(vector<int>& arr1) {
       int n=arr1.size();
       vector<int>arr;
       arr.push_back(arr1[0]);
       for(int i=1;i<n;i++){
          if(arr1[i]!=arr1[i-1]){
            arr.push_back(arr1[i]);
          }
       }
       int count=0;
       for(int i=1;i<arr.size()-1;i++){
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            count ++;
        }
       if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            count ++;
        }
       }
       return count;
    
    }
};