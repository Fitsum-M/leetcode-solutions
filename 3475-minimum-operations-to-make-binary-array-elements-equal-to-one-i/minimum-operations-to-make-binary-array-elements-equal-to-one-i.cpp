

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ops = 0;
        if (n < 3) {
            for (int x : nums) if (x == 0) return -1;
            return 0;
        }

        for (int i = 0; i <= n - 3; ++i) {
            if (nums[i] == 0) {
                
                nums[i] ^= 1;
                nums[i+1] ^= 1;
                nums[i+2] ^= 1;
                ++ops;
            }
        }
        if (nums[n-2] == 1 && nums[n-1] == 1) return ops;
        return -1;
    }
};
