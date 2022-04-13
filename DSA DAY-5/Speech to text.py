import speech_recognition as sr
from tkinter import *
from tkinter import filedialog as fd
import time

main = Tk()
main.geometry('240x240')
main.title('Speech to Text')
files = [0]



def ask():
    audi = fd.askopenfile()
    audi = audi.name
    aud = ''
    for i in range(-1,-len(str(audi))-1,-1):
        if audi[i]!='/':
            aud += audi[i]
        else:
            break
    if True:
        recognize = sr.Recognizer()
        file = sr.AudioFile(aud[::-1])
        if True:
            with file as source:
                audio = recognize.record(source)
                print(recognize.recognize_google(audio))

    name = Button(main,text='Transcript : '+str(files[0]),command=None)
    name.place(x=70,y=100,height=40,width=120)
    
file_select = Button(main,text="Select File",command=ask)
file_select.place(x=70,y=50,height=40,width=120)

name = Button(main,text='Transcript : '+'test.wav',command=None)
name.place(x=70,y=100,height=40,width=120)
