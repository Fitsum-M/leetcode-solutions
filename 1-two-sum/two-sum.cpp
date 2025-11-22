class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mapp;
        for(int i=0;i<n;i++){
            mapp[nums[i]]=i;
        }
        for(int j=0;j<n;j++){
            int diff=target-nums[j];
            if(mapp.find(diff)!=mapp.end()){
                int index=mapp.at(diff);
                if(j!=index){
                    return {j,index};
                }
            }
        }
        return {};
    }
};