from guietta import Gui, Quit

gui = Gui(
    ["Enter your password: ",'__pa__'],
    [["Encrypt"]],
    ["Encrypted Password: ", 'epass'],
    [Quit]
)

def pass_encrypt(gui):
    password = gui.pa
    index = 0
    epass = ""

    while (index < len(password)):
        letter = password[index]
        epass = epass + (chr(ord(letter) + 3))
        index = index + 1
    gui.epass = epass

gui.Encrypt = pass_encrypt
gui.run()
