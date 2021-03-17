'''https://www.codingninjas.com/codestudio/problems/remove-consecutive-duplicates_893195'''
def rduplicates(s):
  if len(s)<2:
    return s
  elif s[0] == s[1]:
    return rduplicates(s[1:])
  else:
    return s[0] + rduplicates(s[1:])
print(rduplicates(input()))
