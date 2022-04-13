from tkinter import *
import random

main = Tk()
main.title("Tic Tac Toe")
main.geometry('360x360')
canvas = Canvas(main, width = 100, height = 100)      
canvas.pack()
#main.withdraw()

result_box = []

def result(func=None,status=''):
        result_box.append(1)
        main.grab_set()
        if len(result_box)==1:
                root = Tk()
                root.title("Result")
                root.geometry("240x240")
                won = Button(root,text=status,command=None)
                won.place(x=70,y=50,height= 40,width=80)
                def closed():
                        root.withdraw()
                        main.withdraw()
                def again_withdraw():
                        func()
                        root.withdraw()
                        result_box.clear()

                if status=="YOU WON!!":
                        color = 'light green'
                else:
                        color = 'red'
                again = Button(root,text="Play again?",command=again_withdraw,bg=color)
                again.place(x=50,y=110,height= 40,width=80)
                close = Button(root,text="Close?",command=closed)
                close.place(x=130,y=110,height= 40,width=80)

        
def box_xo():
        
        xo_img = PhotoImage(file="D:\Tic\XOO.gif")
        oo_img = PhotoImage(file="D:\Tic\OO.gif")
        
        box_list=[]

        def check():
                if 'xx1' in box_list and 'xx2' in box_list and 'xx3' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx4' in box_list and 'xx5' in box_list and 'xx6' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx7' in box_list and'xx8' in box_list and 'xx9' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx1' in box_list and 'xx4'  in box_list and 'xx7' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx2'  in box_list and 'xx5' in box_list and 'xx8' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx3'in box_list and 'xx6' in box_list and 'xx9' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx1' in box_list and 'xx5' in box_list and 'xx9' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'xx3' in box_list and 'xx5' in box_list and 'xx7' in box_list:
                        result(box_xo,"YOU WON!!")
                elif 'oo1' in box_list and 'oo2' in box_list and 'oo3' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo4' in box_list and 'oo5' in box_list and 'oo6' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo7' in box_list and 'oo8' in box_list and 'oo9' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo1' in box_list and 'oo4'  in box_list and 'oo7' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo2'  in box_list and 'oo5' in box_list and 'oo8' in box_list:
                        result("YOU LOST!!")
                elif 'oo3'in box_list and 'oo6' in box_list and 'oo9' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo1' in box_list and 'oo5' in box_list and 'oo9' in box_list:
                        result(box_xo,"YOU LOST!!")
                elif 'oo3' in box_list and 'oo5' in box_list and 'oo7' in box_list:
                        result(box_xo,"YOU LOST!!")
        

        def o_x1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=10,width=90,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_x1 = "oo1"
                box_list.append(box_x1)
                check()
        def o_x2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_x2 = "oo2"
                box_list.append(box_x2)
                check()
        def o_x3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_x3 = "oo3"
                box_list.append(box_x3)
                check()
        def o_y1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=100,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_y1 = "oo4"
                box_list.append(box_y1)
                check()
        def o_y2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_y2 = "oo5"
                box_list.append(box_y2)
                check()
        def o_y3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_y3 = "oo6"
                box_list.append(box_y3)
                check()
        def o_z1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=200,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_z1 = "oo7"
                box_list.append(box_z1)
                check()
        def o_z2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_z2 = "oo8"
                box_list.append(box_z2)
                check()
        def o_z3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_z3 = "oo9"
                box_list.append(box_z3)
                check()
                
        box_func_list = [o_x1,o_x2,o_x3,o_y1,o_y2,o_y3,o_z1,o_z2,o_z3]
        
        def bot():
                
                lb = len(box_func_list)
                temp = ''
                if lb>0:
                        list_random = random.choice(box_func_list)
                        temp = list_random
                        check()
                if 'xx1' in box_list:
                        if 'xx2' in box_list:
                                if 'xx3' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx4' in box_list:
                        if 'xx5' in box_list:
                                if 'xx6' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx7' in box_list:
                        if 'xx8' in box_list:
                                if'xx9' in box_list:
                                        result("YOU WON!!")

                
                elif 'xx1' in box_list:
                        if 'xx4'  in box_list:
                                if 'xx7' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx2'  in box_list:
                        if 'xx5' in box_list:
                                if 'xx8' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx3'in box_list:
                        if 'xx6' in box_list:
                                if 'xx9' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx1' in box_list:
                        if 'xx5' in box_list:
                                if 'xx9' in box_list:
                                        result("YOU WON!!")
                
                elif 'xx3' in box_list:
                        if 'xx5' in box_list:
                                if 'xx7' in box_list:
                                        result("YOU WON!!")
                        
                elif 'oo1' in box_list:
                        if 'oo2' in box_list:
                                if 'oo3' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo4' in box_list:
                        if 'oo5' in box_list:
                                if 'oo6' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo7' in box_list:
                        if 'oo8' in box_list:
                                if'oo9' in box_list:
                                        result("YOU LOST!!")

                
                elif 'oo1' in box_list:
                        if 'oo4'  in box_list:
                                if 'oo7' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo2'  in box_list:
                        if 'oo5' in box_list:
                                if 'oo8' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo3'in box_list:
                        if 'oo6' in box_list:
                                if 'oo9' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo1' in box_list:
                        if 'oo5' in box_list:
                                if 'oo9' in box_list:
                                        result("YOU LOST!!")
                
                elif 'oo3' in box_list:
                        if 'oo5' in box_list:
                                if 'oo7' in box_list:
                                        result("YOU LOST!!")

                if temp in box_func_list:
                        box_func_list.remove(temp)
                
                if lb==1 or lb==2 or lb==3 or lb==4 or lb==5 or lb==6 or lb==7 or lb==8 or lb==9:
                        return temp()  
                        
                
        def x1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=10,width=90,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
                
                box_x1 = "xx1"
                box_list.append(box_x1)

                box_func_list.remove(o_x1)
                bot()
                check()
        def x2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_x2 = "xx2"
                box_list.append(box_x2)

                box_func_list.remove(o_x2)
                
                bot()
                check()
        def x3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_x3 = "xx3"
                box_list.append(box_x3)

                box_func_list.remove(o_x3)
                bot()
                check()
        def y1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=100,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_y2 = "xx4"
                box_list.append(box_y2)

                box_func_list.remove(o_y1)
                bot()
                check()
        def y2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_y2 = "xx5"
                box_list.append(box_y2)

                box_func_list.remove(o_y2)
                bot()
                check()
        def y3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_y3 = "xx6"
                box_list.append(box_y3)

                box_func_list.remove(o_y3)
                bot()
                check()
        def z1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=200,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_z1 = "xx7"
                box_list.append(box_z1)

                box_func_list.remove(o_z1)
                bot()
                check()
        def z2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_z2 = "xx8"
                box_list.append(box_z2)

                box_func_list.remove(o_z2)
                bot()
                check()
        def z3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

                box_z3 = "xx9"
                box_list.append(box_z3)
                
                box_func_list.remove(o_z3)
                bot()
                check()
                
        box_func_list_xo = [x1,x2,x3,y1,y2,y3,z1,z2,z3] 
                

        x1_but = Button(main,text="",command=x1)
        x1_but.place(x=10,y=10,width=90,height=90)
    
        x2_but = Button(main,text="",command=x2)
        x2_but.place(x=100,y=10,width=100,height=90)

        x3_but = Button(main,text="",command=x3)
        x3_but.place(x=200,y=10,width=100,height=90)

        y1_but = Button(main,text="",command=y1)
        y1_but.place(x=10,y=100,width=90,height=100)
    
        y2_but = Button(main,text="",command=y2)
        y2_but.place(x=100,y=100,width=100,height=100)

        y3_but = Button(main,text="",command=y3)
        y3_but.place(x=200,y=100,width=100,height=100)
        
        z1_but = Button(main,text="",command=z1)
        z1_but.place(x=10,y=200,width=90,height=100)
    
        z2_but = Button(main,text="",command=z2)
        z2_but.place(x=100,y=200,width=100,height=100)

        z3_but = Button(main,text="",command=z3)
        z3_but.place(x=200,y=200,width=100,height=100)

        agn = Button(main,text="Again",command=box_xo)
        agn.place(x=100,y=310,width=60,height=40)

        
         

def box_oo():
        
        oo_img = PhotoImage(file="D:\Tic\OO.gif")
        xo_img = PhotoImage(file="D:\Tic\XOO.gif")

        box_list = []
        
        def o_x1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=10,width=90,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)

        def o_x2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_x3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_y1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=100,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_y2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_y3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_z1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=200,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_z2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
        def o_z3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=xo_img)
            
        def x1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=10,width=90,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)
                
                box_x1 = "1"

                box_func_list.remove(o_x1)
                
                bot()
        def x2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_x2)
                
                bot()
        def x3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=10,width=100,height=90)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_x3)
                
                bot()
        def y1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=100,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_y1)
                
                bot()
        def y2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_y2)
                
                bot()
        def y3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=100,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)
                
                box_func_list.remove(o_y3)
                
                bot()
        def z1():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=10,y=200,width=90,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_z1)
                
                bot()
        def z2():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=100,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_z2)
                
                bot()
        def z3():
                canvas = Canvas(main, width = 80, height = 80)
                canvas.place(x=200,y=200,width=100,height=100)
                canvas.create_image(10,10, anchor=NW, image=oo_img)

                box_func_list.remove(o_z3)
                
                bot()

        box_func_list = [o_x1,o_x2,o_x3,o_y1,o_y2,o_y3,o_z1,o_z2,o_z3]
        
        def bot():
                
                lb = len(box_func_list)
                list_random = random.choice(box_func_list)

                #print(rng)
                #list_random = box_func_list[rng-1]
                #num_list.remove(rng)
                
                box_func_list.remove(list_random)
                
                if lb==1 or lb==2 or lb==3 or lb==4 or lb==5 or lb==6 or lb==7 or lb==8 or lb==9:
                        pass
                        return list_random()

        x1_but = Button(main,text="",command=x1)
        x1_but.place(x=10,y=10,width=90,height=90)
    
        x2_but = Button(main,text="",command=x2)
        x2_but.place(x=100,y=10,width=100,height=90)

        x3_but = Button(main,text="",command=x3)
        x3_but.place(x=200,y=10,width=100,height=90)

        y1_but = Button(main,text="",command=y1)
        y1_but.place(x=10,y=100,width=90,height=100)
    
        y2_but = Button(main,text="",command=y2)
        y2_but.place(x=100,y=100,width=100,height=100)

        y3_but = Button(main,text="",command=y3)
        y3_but.place(x=200,y=100,width=100,height=100)
        
        z1_but = Button(main,text="",command=z1)
        z1_but.place(x=10,y=200,width=90,height=100)
    
        z2_but = Button(main,text="",command=z2)
        z2_but.place(x=100,y=200,width=100,height=100)

        z3_but = Button(main,text="",command=z3)
        z3_but.place(x=200,y=200,width=100,height=100)

        agn = Button(main,text="Again",command=box_oo)
        agn.place(x=100,y=310,width=60,height=40)
            


x_img = PhotoImage(file="D:\Tic\XO.gif")
x = Button(main,image=x_img,command=box_xo)
x.place(x=90,y=100,width=90,height=90)

o_img = PhotoImage(file="D:\Tic\O.gif")
o = Button(main,image=o_img,command=box_oo)
o.place(x=180,y=100,width=90,height=90)

main.mainloop()
