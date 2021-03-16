#A Program to check if strings are rotations of each other or not

def areRotations(string1, string2):
    size1 = len(string1)
    size2 = len(string2)
    temp = ''

    if size1 != size2:
        return 0

    temp = string1 + string1

    if (temp.count(string2)> 0):
        return 1
    else:
        return 0

string1 = "kartikey"
string2 = "yekitrak"

if areRotations(string1, string2):
    print("Strings are rotations of each other")
else:
    print("Strings are not rotations of each other")
