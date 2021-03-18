string = input("s=")
## splitting the string on space
words=string.split()
## reversing the words using reversed() function
words=list(reversed(words))
## joining the words and printing
print(" ".join(words))  
