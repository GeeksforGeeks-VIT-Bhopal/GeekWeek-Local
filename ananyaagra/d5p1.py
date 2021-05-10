def Finder(a):
  flag =0
  
  for i in range(0,len(a)):
    if flag == 0 and (a[i] == 'F' or a[i] == 'S'):
      flag += 1
      posi = 0
    
    elif flag != 0 and a[i] == '.':
      posi += 1
    
    elif flag != 0 and (a[i] == 'F' or a[i] == 'S'):
      posi += 1
      break
  
  return posi

arr = "..F.....S..."
Finder(arr)
