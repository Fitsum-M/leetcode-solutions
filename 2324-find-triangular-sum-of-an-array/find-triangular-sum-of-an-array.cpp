class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) {
        vector<int> next(nums.size() - 1);
        for (int i = 0; i < nums.size() - 1; i++) {
            next[i] = (nums[i] + nums[i + 1]) % 10;
        }
        nums.swap(next); 
    }
    return nums[0];
    }
};