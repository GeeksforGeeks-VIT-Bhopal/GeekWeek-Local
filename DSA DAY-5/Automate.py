from tkinter import *
from tkinter.filedialog import askopenfile
from tkinter import filedialog as fd
import tkinter.font as font
import pyautogui,time
  
main = Tk()
main.geometry("420x390")
main.title("Discord auto Playlist Player.")

temp = [0]
timer = [0]
print("TYPING COMMANDS AUTOMATICALLY")
def typer():
    time.sleep(5)
    with open(temp[0],'r+') as file:
        for i in file:
            i = '-play '+i
            pyautogui.typewrite(i)
            pyautogui.press("enter")


def times():
    root = Tk()
    one = Button(root,text="5",font="Times",command=None)
    one.pack()
times()

but_1 = Button(main,text="START",command=typer,bg="light blue")
but_1.place(x=0,y=30,height=180,width=210)

but_2 = Button(main,text="FILES",command=None,bg="pink")
but_2.place(x=210,y=30,height=180,width=210)

but_3 = Button(main,text="CREATE \nCUSTOM FILES",command=None,bg="pink")
but_3.place(x=0,y=210,height=180,width=210)

but_4 = Button(main,text="CREATE \nPLAYLIST",command=None,bg="light blue")
but_4.place(x=210,y=210,height=180,width=210)

def open_file():
    filename = fd.askopenfilename()
    temp[0]=filename
  
choose = Button(main, text ='Select File',command= open_file,bg='white')
choose.place(x=0,y=0,height=30,width=210)
mainloop() 
