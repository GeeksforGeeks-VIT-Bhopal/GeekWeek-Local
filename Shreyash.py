n = int(input("Enter the number of values: "))
a, b = 0, 1
if n <= 0:
    print("Enter a positive number")
elif n == 1:
    print("fibonacci series upto ", n, "terms: ")
    print(a)
else:
    print("fibonacci series upto ", n, "terms: ")
    print(a)
    print(b)
    for i in range(2, n):
        c = a + b
        print(c)
        a = b
        b = c

