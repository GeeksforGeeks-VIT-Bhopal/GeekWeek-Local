import pyautogui, time

file = input("Enter message to be spammed : ")
n = int(input("Enter number of times you want to spam the message : "))
if True:
    time.sleep(5)
    if True:
        for i in range(n):
            pyautogui.typewrite(file)
            pyautogui.press("enter")
