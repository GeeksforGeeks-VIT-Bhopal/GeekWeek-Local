num,n = input().split()
n = int(n)

tempo = list(num)
tempo = [int(x) for x in tempo]
tempo = sum(tempo)
tempo = str(tempo)*n
str_num = tempo
for _ in range(n):
    temp = list(str_num)
    temp = [int(x) for x in temp]
    sum_str = sum(temp)
    str_num = str(sum_str)
    if len(str_num)==1:
        break
print(str_num)
    
