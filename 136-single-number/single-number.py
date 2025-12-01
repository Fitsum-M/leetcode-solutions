class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        frequency_map = {}
    
        for item in nums:
          frequency_map[item] = frequency_map.get(item, 0) + 1
        for item in nums:
          if(frequency_map[item]==1):
            return item 
        return 0;