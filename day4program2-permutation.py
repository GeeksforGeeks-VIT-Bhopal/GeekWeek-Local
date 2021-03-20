class Solution:
    def permute(self, num: List[int]) -> List[List[int]]:
        if len(num)==0:
            return []

        r = []
        s = []

        def recursiveperm(list,final,temp):
            l = len(list)

            if l == 0:
                final.append(temp)
                return

            for i in range(l):
                nexttemp = temp[:]
                nexttemp.append(list[i])
                templist = list[:]
                templist.pop(i)
                recursiveperm(templist,final,nexttemp)

        recursiveperm(num,r,s)
        return r