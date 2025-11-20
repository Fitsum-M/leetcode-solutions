class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int n=nums.size();
      vector<int>hash(101,0);
      for(int i=0;i<n;i++){
        hash[nums[i]]++;
      }
      vector<int>v(101,0);
      v[0]=hash[0];
      for(int i=1;i<101;i++){
           v[i]=v[i-1]+hash[i];
      }
      vector<int>ans(n);
      for(int i=0;i<n;i++){
        if(nums[i]!=0) ans[i]=v[nums[i]-1];
        else ans[i]=0;
      }
        return ans;
    }
};