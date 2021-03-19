from cryptography.fernet import Fernet
import binascii
from tkinter import *

main = Tk()
main.geometry('240x240')
main.title('Password Encrypter')

user_pass = Entry(main,text='Enter the password to encrypt')
user_pass.place(x=70,y=80)
def encrypt():
    root = Tk()
    root.geometry('800x240')
    root.title('Encrypted password')
    key = b'pRmgMa8T0INjEAfksaq2aafzoZXEuwKI7wDe4c1F8AY='
    cipher = Fernet(key)
    pa = user_pass.get()
    res = pa.encode('ascii')
    cipheredP = cipher.encrypt(res)
    msg_1 = Label(root,text="Encripted Password : ")
    msg_2 = Label(root,text= cipheredP)
    msg_1.grid(row=0,column=0)
    msg_2.grid(row=0,column=1)
    up = str((cipher.decrypt(cipheredP)))
    up = up.replace("b","")
    up = up.replace("'","")
    msg_3 = Label(root,text="UnEncripted Password : ")
    msg_4 = Label(root,text=up)
    msg_3.grid(row=1,column=0)
    msg_4.grid(row=1,column=1)
submit = Button(main,text='Encrypt',command=encrypt)
submit.place(x=70,y=100)
