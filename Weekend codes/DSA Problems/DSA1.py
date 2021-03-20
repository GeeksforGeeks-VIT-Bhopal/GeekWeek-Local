from datetime import datetime as dt
fmt = '%a %d %b %Y %H:%M:%S %z'
A = int(input())
for i in range(A):
    print(int(abs((dt.strptime(input(), fmt) - 
                dt.strptime(input(), fmt)).total_seconds())))