class Solution {
public:
    int maximumGap(vector<int>& nums) {
         if (nums.size() < 2) return 0;
        sort(nums.begin(),nums.end());
        int diff=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int currdif=nums[i+1]-nums[i];
            diff=max(diff,currdif);

        }
        return diff;
    }
};