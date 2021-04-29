SECURE = (('s', '$'), ('and', '&'),
            ('a', '@'), ('o', '0'), ('i', '1'),
            ('I', '|'),('S','x'),('y','*'),('k','#'),('l','!'),('1','0'),('2','q'),('3','e'))

def securePassword(password):
    for a,b in SECURE:
        password = password.replace(a, b)
    return password

if __name__== "__main__":
    password = input("Enter your password\n")
    password = securePassword(password)
    print(f"Your secure password is {password}")