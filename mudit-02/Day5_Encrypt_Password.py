# Encryt a password

from guietta import _, Gui, Quit

gui = Gui(
    ["PASSWORD:",_,'__p __'],
    [_,['ENCRYPT'],_],
    ["ENCRYPTED PASSWORD:",_,'epass'],
    [_,Quit,_]
)

def encrypt_pass(gui):
    password = gui.p
    index = 0
    epass = ""

    while(index <len(password)):
        letter = password[index]
        epass = epass + (chr(ord(letter) + 3))
        index += 1
    gui.epass = epass

gui.Encrypt = encrypt_pass

gui.run()
