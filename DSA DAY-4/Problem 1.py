class Solution(object):
    def isPerfectSquare(self, num):
        a=int(num**(.5))
        if a**2 == num:
            return True
        else:
            return False
