class Solution:
    def reverseVowels(self, s: str) -> str:
        vow = ''
        for i in s:
            if i in 'aeiouAEIOU':
                vow+=i
        ans = ''
        for i in s:
            if i in 'aeiouAEIOU':
                ans += vow[-1]
                vow = vow[:len(vow)-1]
            else:
                ans+=i
        return ans
