def random():
    m = 1000000
    x0 = 5
    a = 32
    b = 0
    s = True
    while (s == True):
        ask = input("Want to generate a random number? (y/n) ")

        if (ask.lower() == 'y'):
            x = (a * x0 + b) % m
            print(x)
            x0 = x
        else:
            s = False
            print("end")
            break
                
random()  