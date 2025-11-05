class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if(x<0):
          return False;
        rev=0
        original=x
        while(x!=0):
            r=x%10
            rev=rev*10+r
            x=x//10
        
        return rev==original
        