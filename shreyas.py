#Shreyas Rajak 20MEI10005
def numvowel(ch):
    return ch.upper() in ['A','E','I','O','U']
def count(str):
    count1 = 0
    count2 = 0
    for i in range (len(str)):
        if numvowel(str[i]):
            count1 += 1
        else:
            count2 += 1
        return count1 , count2
str = input("enter the string: ")
a = count(str)
print(a)
print("number of vowels,number of consonants")