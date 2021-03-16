while (0<1):
    text=input("Enter The Text :  ")
    s=int(input("Enter The Shift :  "))
    b=" "
    for i in range(len(text)):
        char=text[i]
        if (char.isupper()):
            b += chr((ord(char) + s-65) % 26+ 65)
        else:
            b += chr((ord(char) + s-97) % 26+97)
    

    print("Cipher  :  " + b)
