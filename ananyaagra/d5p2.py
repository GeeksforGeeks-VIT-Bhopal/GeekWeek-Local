def Score(a):
  flag =0
  a.sort()
  for i in range(1,len(a)-1):
    flag += a[i]
  
  return flag

arr = [1, 2, 3, 19, 11, 90, 0]
Score(arr)
