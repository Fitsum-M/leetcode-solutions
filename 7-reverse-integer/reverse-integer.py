class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        org=x
        rev=0
        if(x<0):
            x=x*-1
        while(x>0):
            r=x%10
            rev=rev*10 +r
            x=x//10
        if rev < INT_MIN or rev > INT_MAX:
            return 0
        if(org<0):
            return rev*-1
        else:
            return rev