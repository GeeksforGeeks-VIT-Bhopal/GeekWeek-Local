try your luck Rock paper and scissor

from random import randint
choice=["rock","paper","scissors"]
computer_choice=choice[randint(0,2)]

print("Welcome to the game of Rock, Paper and scissor!")
print("All the best!!")
user_choice=input("Enter your choice:")
print("computer choice is:" +computer_choice)
if computer_choice==user_choice:
    print("Draw!(How the fuck is this possible!!)")
elif computer_choice=="rock" and user_choice=="paper":
    print("You Won(it feels like you have cheated)")
elif computer_choice=="paper" and user_choice=="rock":
    print("loss(better luck next time boomer)")
elif computer_choice=="paper" and user_choice=="scissor":
    print("You Won(I accept my defeat sensai)")
elif computer_choice=="scissor" and user_choice=="paper":
    print("you lost boomer!!!")
elif computer_choice=="scissor" and user_choice=="rock":
    print("You won(Fuck off now)")
else:
    print("you lost(HAHAHAHAHAHAHAHAHA)")
