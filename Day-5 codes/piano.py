from tkinter import *
import pygame

pygame.init()


def note_C0():
	num1.set("C_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/c1.wav")
	sound.play()


def note_CC0():
	num1.set("C#_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/c1s.wav")
	sound.play()

def note_D0():
	num1.set("D_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/d1.wav")
	sound.play()

def note_DD0():
	num1.set("D#_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/d1s.wav")
	sound.play()

def note_E0():
	num1.set("E_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/e1.wav")
	sound.play()

def note_F0():
	num1.set("F_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/f1.wav")
	sound.play()

def note_FF0():
	num1.set("F#_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/f1s.wav")
	sound.play()

def note_G0():
	num1.set("G_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/g1.wav")
	sound.play()

def note_GG0():
	num1.set("G#_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/g1s.wav")
	sound.play()

def note_A0():
	num1.set("A_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/a1.wav")
	sound.play()

def note_AA0():
	num1.set("A#_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/a1s.wav")
	sound.play()

def note_B0():
	num1.set("B_0")
	sound = pygame.mixer.Sound("wav-piano-sound-master/wav/b1.wav")
	sound.play()


x = [0]
def add():
        x[0] += 60
class MyFirstGUI:
	def __init__(self, master):
		self.master = master
		master.title("Piano")
		master.geometry("720x240")

		'''self.Label = Label(master , text="Piano")
		self.Label.place(x=330,y= 10,height=20,width=70) '''
                        
		self.C_0_button = Button(master, bg="white",text="", command=note_C0 ,height=10 , width=3)
		self.C_0_button.place(x=x[0],y=0,height=240,width=60)
		add()
		

		self.D_0_button = Button(master, bg="white", text="" ,command=note_D0,height=10 , width=3)
		self.D_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.E_0_button = Button(master, bg="white", text="" ,command=note_E0,height=10 , width=3)
		self.E_0_button.place(x=x[0],y=0,height=240,width=60)
		add()
		

		self.F_0_button = Button(master, bg="white", text="" ,command=note_F0,height=10 , width=3)
		self.F_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.G_0_button = Button(master, bg="white",text="" ,command=note_G0,height=10 , width=3)
		self.G_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.A_0_button = Button(master, bg="white",text="" ,command=note_A0,height=10 , width=3)
		self.A_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Bb_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Bb_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Bc_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Bc_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Bd_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Bd_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Be_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Be_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Bf_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Bf_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		self.Bg_0_button = Button(master, bg="white",text="" ,command=note_B0,height=10 , width=3)
		self.Bg_0_button.place(x=x[0],y=0,height=240,width=60)
		add()

		
		self.FFb_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFb_0_button.place(x=40,y=0,height=180,width=40)
		add()

		self.FF_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FF_0_button.place(x=100,y=0,height=180,width=40)
		add()

		self.FFa_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFa_0_button.place(x=220,y=0,height=180,width=40)
		add()

		self.FFc_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFc_0_button.place(x=280,y=0,height=180,width=40)
		add()
		
		self.FFd_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFd_0_button.place(x=340,y=0,height=180,width=40)
		add()
				
		self.FFe_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFe_0_button.place(x=460,y=0,height=180,width=40)
		add()
		
		self.FFf_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFf_0_button.place(x=520,y=0,height=180,width=40)
		add()

		self.FFg_0_button = Button(master , bg="black", fg="white",text="" , command=note_FF0,height=10 ,width=2)
		self.FFg_0_button.place(x=640,y=0,height=180,width=40)
		add()
		

root = Tk()
my_gui = MyFirstGUI(root)
num1 = StringVar()

root.mainloop()      


