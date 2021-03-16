used=[[False,False,False],[False,False,False],[False,False,False]]
values=[[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
pos=-1

def check(a):
    result='E'; 
    if(a[0][0]==a[1][1]==a[2][2]):   
        result=a[0][0];
    elif(a[0][0]==a[0][1]==a[0][2]):
        result=a[0][0];
    elif(a[1][0]==a[1][1]==a[1][2]):
        result=a[1][0];
    elif(a[2][0]==a[2][1]==a[2][2]):
        result=a[2][0];
    elif(a[0][0]==a[1][0]==a[2][0]):
        result=a[0][0];
    elif(a[0][1]==a[1][1]==a[2][1]):
        result=a[0][1];
    elif(a[0][2]==a[1][2]==a[2][2]):
        result=a[0][2];
    elif(a[0][2]==a[1][1]==a[0][2]):
        result=a[0][0];
    return result;

def showmatrix(b):
    for i in range(0,3):
        for j in range(0,3):
            if(j<2):
                print(b[i][j]+" |",end=" ")
            else:
                print(b[i][j])
        if(i<2):
            print("__ __ __")
def play():
    for i in range (0,9):
        if(i%2==0):
             pos=int(input("Enter the position to place X player 1:"))
        else:
            pos=int(input("Enter the position to place O player 2:"))
        pos=pos-1
        row=pos//3;
        col=pos%3;

        if not(used[row][col]):
            used[row][col]=True
            if(i%2==0):
                values[row][col]='X'
            else:
                values[row][col]='O'
        ch=check(values)
 
        showmatrix(values)

        if(ch=='X'):
            print("Player 1 wins")
            break
        elif(ch=='O'):
            print("Player 2 wins")
            break


play()