class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) v.push_back(nums[i]);
        }
         int count=1;
         int curcount=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]==v[i]+1){
                curcount++;
            }
           else{
            curcount=1;
           }
            count=max(curcount,count);
        }
           
        
        return count;
    }
};