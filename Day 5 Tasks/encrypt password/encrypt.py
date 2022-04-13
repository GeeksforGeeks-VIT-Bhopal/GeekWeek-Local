SECURE = (('s', '$'), ('and', '&'), 
            ('a', '@'), ('o', '0'), ('i', '1'),
            ('I', '|'))

    Input:
    password = "Indians123"

    Output:
    Your secure password is |nd1@n$123

'''


SECURE = (('s', '$'), ('and', '&'), 
            ('a', '@'), ('o', '0'), ('i', '1'),
            ('I', '|'))

def securePassword(password):
    for a,b in SECURE:
        password = password.replace(a, b)
    return password

if _name_ == "_main_":
    password = input("Enter your password\n")
    password = securePassword(password)
    print(f"Your secure password is {password}")