#difficult

class Solution:
    def reverseWords(self, s: str) -> str:
        lst = s.strip()
        lst = s.split()
        lst.reverse()
        lst = " ".join(lst)
        return lst

#https://leetcode.com/problems/reverse-words-in-a-string/