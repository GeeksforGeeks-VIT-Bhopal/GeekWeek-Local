def c_try(q):
    import random
    n = random.randint(1, 1000)
    i = 1
    while i <= 1000:
        x = int(input("\nEnter your Guess: "))
        if x > n:
            print(f"Too high, Try again! ({1000 - i} guesses left)")
        elif x < n:
            print(f"Too low, Try again! ({1000 - i} guesses left)")
        else:
            c = input("\nExcellent Job! You guessed the number!\nWould you like to Play Again? (y or n): ")

            if c in "yYyesYES":
                c_try(c)
            elif c in "nNnoNO":
                exit()
            else:
                print("Invalid Input!")
                exit()
        i += 1


print("I have a number between 1 to 1000")
t = input("Can you guess my number? (y or n): ")
c_try(t)
