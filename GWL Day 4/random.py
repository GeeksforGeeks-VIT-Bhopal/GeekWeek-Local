def newfunc(Xo, m, a, c, randomNums, noOfRandomNums):
    randomNums[0] =Xo

    for i in range(1, noOfRandomNums):
        randomNums[i] = ((randomNums[i-1] * a) + c) % m

if __name__ == '__main__':
    Xo=5
    m=7
    a=3
    c=3

    noOfRandomNums = int(input("Enter the number of random numbers to be displayed "))
    randomNums = [0] * (noOfRandomNums)
    newfunc(Xo, m, a, c, randomNums, noOfRandomNums)
    for i in randomNums:
        print(i, end = " ")
