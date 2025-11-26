class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mapp;
        for(int x:nums){
            mapp[x]++;
        }
        
        sort(nums.begin(),nums.end(),[&](const int a,const int b){
            if(mapp[a]==mapp[b]){
                return a>b;
            } 
            return mapp[a]<mapp[b];
        });
        return nums;
    }
};