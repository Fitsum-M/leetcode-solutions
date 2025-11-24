class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n=nums.size();
       vector<int>v;
       map<int,int>mapp;
       for(int i=0;i<n;i++){
        mapp[nums[i]]=i;
       }
       for(int j=1;j<=n;j++){
        if(mapp.find(j)==mapp.end()){
            v.push_back(j);
        }
       }
       return v;
    }
};