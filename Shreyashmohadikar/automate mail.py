class Solution:
   def solve(self, mailboxes):
      n_mailboxes = len(mailboxes)
      result = []
      counts = [0]*n_mailboxes
      more = True
      while more:
         more = False
         for i in range(n_mailboxes):
            index, mailbox = counts[i], mailboxes[i]
            if index < len(mailbox):
               more = True
               counts[i] += 1
               mail = mailbox[index]
               if mail != "J":
                  result.append(mail)
         return result
ob = Solution()
mailboxes = [["W", "P"],["J", "P", "J"],["W"]]
print(ob.solve(mailboxes))
