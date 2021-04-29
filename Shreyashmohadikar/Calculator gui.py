from tkinter import *
from tkinter import messagebox
import math

screen = Tk()
screen.title("My Calculator")
screen.configure(bg='blue')
screen.iconbitmap('calculator.ico')

screen.maxsize(width=478,height=490)
screen.minsize(width=362,height='490')
# screen.geometry("453x490")


def click(number):
    global operator
    operator += str(number)
    tex.set(operator)


def clear():
    global operator
    operator = ''
    tex.set(operator)


def equal():
    global operator
    try:
        result = eval(operator)
        operator = str(result)
        tex.set(result)
    except:
        messagebox.showinfo('Notification','Something is wrong \n Please try again',parent=screen)

######################################

def on_enter7(e):
    btn7.configure(bg='light green')


def on_leave7(e):
    btn7.configure(bg='powder blue')


def on_enter8(e):
    btn8.configure(bg='light green')


def on_leave8(e):
    btn8.configure(bg='powder blue')


def on_enter9(e):
    btn9.configure(bg='light green')


def on_leave9(e):
    btn9.configure(bg='powder blue')


def on_enter4(e):
    btn4.configure(bg='light green')


def on_leave4(e):
    btn4.configure(bg='powder blue')


def on_enter5(e):
    btn5.configure(bg='light green')


def on_leave5(e):
    btn5.configure(bg='powder blue')


def on_enter6(e):
    btn6.configure(bg='light green')


def on_leave6(e):
    btn6.configure(bg='powder blue')


def on_enter1(e):
    btn1.configure(bg='light green')


def on_leave1(e):
    btn1.configure(bg='powder blue')


def on_enter2(e):
    btn2.configure(bg='light green')


def on_leave2(e):
    btn2.configure(bg='powder blue')


def on_enter3(e):
    btn3.configure(bg='light green')


def on_leave3(e):
    btn3.configure(bg='powder blue')


def on_enter0(e):
    btn0.configure(bg='light green')


def on_leave0(e):
    btn0.configure(bg='powder blue')


def on_enteradd(e):
    btnadd.configure(bg='light green')


def on_leaveadd(e):
    btnadd.configure(bg='powder blue')


def on_entersub(e):
    btnsub.configure(bg='light green')


def on_leavesub(e):
    btnsub.configure(bg='powder blue')


def on_entermul(e):
    btnmul.configure(bg='light green')


def on_leavemul(e):
    btnmul.configure(bg='powder blue')


def on_enterdiv(e):
    btndiv.configure(bg='light green')


def on_leavediv(e):
    btndiv.configure(bg='powder blue')


def on_enterclr(e):
    btnclr.configure(bg='light green')


def on_leaveclr(e):
    btnclr.configure(bg='powder blue')


def on_entereql(e):
    btneql.configure(bg='light green')


def on_leaveeql(e):
    btneql.configure(bg='powder blue')


def on_entryenter(e):
    entry1.configure(bg='red',fg='white')


def on_entryleave(e):
    entry1.configure(bg='cyan',fg='black')

######################################

def on_entersin(e):
    btnsin.configure(bg='light green', fg='black')
def on_leavesin(e):
    btnsin.configure(bg='powder blue', fg='black')

def on_entercos(e):
    btncos.configure(bg='light green', fg='black')
def on_leavecos(e):
    btncos.configure(bg='powder blue', fg='black')

def on_entertan(e):
    btntan.configure(bg='light green', fg='black')
def on_leavetan(e):
    btntan.configure(bg='powder blue', fg='black')

def on_entersqrt(e):
    btnsqrt.configure(bg='light green', fg='black')
def on_leavesqrt(e):
    btnsqrt.configure(bg='powder blue', fg='black')

def on_enterlog(e):
    btnlog.configure(bg='light green', fg='black')
def on_leavelog(e):
    btnlog.configure(bg='powder blue', fg='black')

def cmsin():
    global operator
    try:
        result = math.sin(eval(tex.get()))
        operator=str(result)
        tex.set(operator)
    except:
        messagebox.showinfo('Notification', "Try again \nSomething's wrong here ")

def cmcos():
    global operator
    try:
        result = math.cos(eval(tex.get()))
        operator=str(result)
        tex.set(operator)
    except:
        messagebox.showinfo('Notification', "Try again \nSomething's wrong here ")

def cmtan():
    global operator
    try:
        result = math.tan(eval(tex.get()))
        operator=str(result)
        tex.set(operator)
    except:
        messagebox.showinfo('Notification', "Try again \nSomething's wrong here ")

def cmsqrt():
    global operator
    try:
        result = math.sqrt(eval(tex.get()))
        operator=str(result)
        tex.set(operator)
    except:
        messagebox.showinfo('Notification', "Try again \nSomething's wrong here ")

def cmlog():
    global operator
    try:
        result = math.log(eval(tex.get()))
        operator=str(result)
        tex.set(operator)
    except:
        messagebox.showinfo('Notification', "Try again \nSomething's wrong here ")

######################################

tex = StringVar()
operator = ''

entry1 = Entry(screen, bg='cyan', font=('Bahnschrift SemiBold', 20, 'bold'), bd='30', justify='right', textvariable=tex)
entry1.grid(row=0, columnspan=4)

btn7 = Button(screen, text='7', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(7),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn7.grid(row=1, column=0)

btn8 = Button(screen, text='8', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(8),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn8.grid(row=1, column=1)

btn9 = Button(screen, text='9', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(9),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn9.grid(row=1, column=2)

btnadd = Button(screen, text='+', font=('arial', 20, 'italic bold'), bd=8, padx=18, pady=16, command=lambda: click('+'),
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnadd.grid(row=1, column=3)

btn4 = Button(screen, text='4', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(4),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn4.grid(row=2, column=0)

btn5 = Button(screen, text='5', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(5),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn5.grid(row=2, column=1)

btn6 = Button(screen, text='6', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(6),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn6.grid(row=2, column=2)

btnsub = Button(screen, text='-', font=('arial', 20, 'italic bold'), bd=8, padx=22, pady=16, command=lambda: click('-'),
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnsub.grid(row=2, column=3)

btn1 = Button(screen, text='1', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(1),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn1.grid(row=3, column=0)

btn2 = Button(screen, text='2', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(2),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn2.grid(row=3, column=1)

btn3 = Button(screen, text='3', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(3),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn3.grid(row=3, column=2)

btnmul = Button(screen, text='*', font=('arial', 20, 'italic bold'), bd=8, padx=20, pady=16, command=lambda: click('*'),
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnmul.grid(row=3, column=3)

btn0 = Button(screen, text='0', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=lambda: click(0),
              activebackground='orange', activeforeground='red', bg='powder blue')
btn0.grid(row=4, column=0)

btnclr = Button(screen, text='C', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=clear,
                activebackground='light green', activeforeground='red', bg='powder blue')
btnclr.grid(row=4, column=1)

btneql = Button(screen, text='=', font=('arial', 20, 'italic bold'), bd=8, padx=16, pady=16, command=equal,
                activebackground='purple', activeforeground='red', bg='powder blue')
btneql.grid(row=4, column=2)

btndiv = Button(screen, text='/', font=('arial', 20, 'italic bold'), bd=8, padx=22, pady=16, command=lambda: click('/'),
                activebackground='red', activeforeground='yellow', bg='powder blue')
btndiv.grid(row=4, column=3)

#####################################################
#Scientific Calculator

btnsin  = Button(screen, text='sin', font=('arial', 20, 'italic bold'), bd=8, padx=21, pady=16, command=cmsin,
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnsin.grid(row=0, column=4)

btncos = Button(screen, text='cos', font=('arial', 20, 'italic bold'), bd=8, padx=17, pady=16, command=cmcos,
                activebackground='red', activeforeground='yellow', bg='powder blue')
btncos.grid(row=1, column=4)

btntan = Button(screen, text='tan', font=('arial', 20, 'italic bold'), bd=8, padx=20, pady=16, command=cmtan,
                activebackground='red', activeforeground='yellow', bg='powder blue')
btntan.grid(row=2, column=4)\

btnsqrt = Button(screen, text='sqrt', font=('arial', 20, 'italic bold'), bd=8, padx=15, pady=14, command=cmsqrt,
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnsqrt.grid(row=3, column=4)

btnlog = Button(screen, text='log', font=('arial', 20, 'italic bold'), bd=8, padx=21, pady=16, command=cmlog,
                activebackground='red', activeforeground='yellow', bg='powder blue')
btnlog.grid(row=4, column=4)




######################################
entry1.bind('<Enter>', on_entryenter)
entry1.bind('<Leave>', on_entryleave)

btn7.bind('<Enter>', on_enter7)
btn7.bind('<Leave>', on_leave7)

btn6.bind('<Enter>', on_enter6)
btn6.bind('<Leave>', on_leave6)

btn5.bind('<Enter>', on_enter5)
btn5.bind('<Leave>', on_leave5)

btn4.bind('<Enter>', on_enter4)
btn4.bind('<Leave>', on_leave4)

btn3.bind('<Enter>', on_enter3)
btn3.bind('<Leave>', on_leave3)

btn2.bind('<Enter>', on_enter2)
btn2.bind('<Leave>', on_leave2)

btn1.bind('<Enter>', on_enter1)
btn1.bind('<Leave>', on_leave1)

btn0.bind('<Enter>', on_enter0)
btn0.bind('<Leave>', on_leave0)

btn8.bind('<Enter>', on_enter8)
btn8.bind('<Leave>', on_leave8)

btn9.bind('<Enter>', on_enter9)
btn9.bind('<Leave>', on_leave9)

btnadd.bind('<Enter>', on_enteradd)
btnadd.bind('<Leave>', on_leaveadd)

btnsub.bind('<Enter>', on_entersub)
btnsub.bind('<Leave>', on_leavesub)

btnmul.bind('<Enter>', on_entermul)
btnmul.bind('<Leave>', on_leavemul)

btndiv.bind('<Enter>', on_enterdiv)
btndiv.bind('<Leave>', on_leavediv)

btneql.bind('<Enter>', on_entereql)
btneql.bind('<Leave>', on_leaveeql)

btnclr.bind('<Enter>', on_enterclr)
btnclr.bind('<Leave>', on_leaveclr)

#############################

btnsin.bind('<Enter>', on_entersin)
btnsin.bind('<Leave>', on_leavesin)

btncos.bind('<Enter>', on_entercos)
btncos.bind('<Leave>', on_leavecos)

btntan.bind('<Enter>', on_entertan)
btntan.bind('<Leave>', on_leavetan)

btnsqrt.bind('<Enter>', on_entersqrt)
btnsqrt.bind('<Leave>', on_leavesqrt)

btnlog.bind('<Enter>', on_enterlog)
btnlog.bind('<Leave>', on_leavelog)



screen.mainloop()
