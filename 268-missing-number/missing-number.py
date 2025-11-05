class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)+1
        for i in range(n):
           if i not in nums:
              return i