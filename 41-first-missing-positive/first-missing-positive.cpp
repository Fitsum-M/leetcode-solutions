class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]];
        }
        for(int i=1;i<=n;i++){
            if(mpp.find(i)==mpp.end()) return i;
            
        }
        return n+1;
    }
};