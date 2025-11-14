class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int n=arr.size();
       int current=1;
       int missing=0;
       int i=0;
       while(k>0){
        if(i<n && arr[i]==current){
            i++;
        }
        else{
            missing=current;
            k--;
        }
        current++;
       }
       return missing;
    }
};