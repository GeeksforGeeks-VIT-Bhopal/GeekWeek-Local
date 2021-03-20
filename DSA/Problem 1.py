n,k  = map(int,input().split())
arr = list(map(str,input().split()))
freq = {}

temp = set(arr)
for i in temp:
    freq.update({i:arr.count(i)})
key = list(freq.keys())
value = list(freq.values())

ans = sorted(zip(value,key), reverse=True)[:k]
answer = []
count = 0
for i in ans:
    answ = []
    for j in freq:
        if freq[j]==i[0]:
            if j not in answ:
                answ.append(j)
                count += 1
    for l in sorted(answ):
        if l not in answer:
            answer.append(l)
    if count==k:
        break

for i in range(k):
    print(answer[i],end=' ')
        

            

            

    
        
    
