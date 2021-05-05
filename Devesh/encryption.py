result = ''
choice = ''
message = ''

while choice != 0:
    choice = input("\n Do you want to encrypt or decrypt the message?\n 1 to encrypt, 2 to decrypt or 0 to exit program. ")

    if choice == '1':
        message = input('\nEnter message for encryption: ')
        for i in range(0, len(message)):
            result = result + chr(ord(message[i]) - 2)

        print(result + '\n\n')
        result = ''

    if choice == '2':
        message = input('\nEnter message to decrypt: ')
        for i in range(0, len(message)):
            result = result + chr(ord(message[i]) + 2)

        print(result + '\n\n')
        result = ''

    elif choice != '0':
        print('You have entered an invalid input, please try again. \n\n')
