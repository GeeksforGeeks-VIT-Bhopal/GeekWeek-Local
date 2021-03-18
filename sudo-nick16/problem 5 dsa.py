#medium

class Solution:
    def letterCombinations(self, d: str) -> List[str]:
        a = {'2':['a','b','c'],'3':['d','e','f'], '4':['g','h','i'], '5':['j','k','l'], '6':['m','n','o'], '7':['p','q','r','s'], '8':['t','u','v'], '9':['w','x','y','z']}
        l = len(d)
        if l == 0:
            return []
        elif l == 1:
            return a[d]
        elif l == 2:
            lst = []
            for i in a[d[0]]:
                for j in a[d[1]]:
                       s = i + j
                       lst.append(s)
            return lst
        elif l == 3:
            lst = []
            for i in a[d[0]]:
                for j in a[d[1]]:
                       for k in a[d[2]]:
                            s = i + j + k
                            lst.append(s)
            return lst
        elif l == 4:
            lst = []
            for i in a[d[0]]:
                for j in a[d[1]]:
                       for k in a[d[2]]:
                            for l in a[d[3]]:
                                s = i + j + k + l
                                lst.append(s)
            return lst
        
#https://leetcode.com/problems/letter-combinations-of-a-phone-number/