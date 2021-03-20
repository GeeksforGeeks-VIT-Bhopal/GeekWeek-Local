# Enter your code here. Read input from STDIN. Print output to STDOUT
pbook={}
n=int(input())
for i in range(n):
    lis=input().split()
    pbook.update({lis[0]:lis[1]})
    
while True:
    try:
        check=input()
        if check in pbook.keys():
            print(check+"="+pbook.get(check))
        else:
            print("Not found")
    except:
        break    
