class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mapp;
        for(int i=0;i<n;i++){
            mapp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(mapp.find(diff)!=mapp.end()){
                int index=mapp[diff];
                if(index!=i){
                return {i,index};
                }
            }
        }
        return {};
    }
};