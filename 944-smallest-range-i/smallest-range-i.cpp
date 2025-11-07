class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        return max(0, maxVal - minVal - 2*k); 
    }
};