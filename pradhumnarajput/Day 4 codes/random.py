def linearCongruentialMethod(Xo, m, a, c,
                             randomNums, 
                             noOfRandomNums): 

    # Initialize the seed state 
    randomNums[0] = Xo 

    # Traverse to generate required 
    # numbers of random numbers 
    for i in range(1, noOfRandomNums): 
        randomNums[i] = ((randomNums[i - 1] * a) +  c) % m 

if name == 'main':
    # Seed value 
    Xo = 5
    # Modulus parameter 
    m = 7
    # Multiplier term 
    a = 3
    # Increment term 
    c = 3 

    noOfRandomNums = int(input("enter no of random nos you want to enter"))
    print(noOfRandomNums)
    randomNums = [0] * (noOfRandomNums) 
    linearCongruentialMethod(Xo, m, a, c, randomNums, noOfRandomNums) 
    for i in randomNums: 
        print(i, end = " ")