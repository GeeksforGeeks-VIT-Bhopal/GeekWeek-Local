board = ["-", "-", "-",
         "-", "-", "-",
         "-", "-", "-"]
def DisplayBoard():
    print(board[0]+"|"+board[1]+"|"+board[2])
    print(board[3]+"|"+board[4]+"|"+board[5])
    print(board[6]+"|"+board[7]+"|"+board[8])
    
DisplayBoard()

def playGame():
    count=0
    turn = "X"
    while count<=9:
        move = int(input("Its your turn "+turn+". enter your move: "))
        if board[move] != "-":
            print("Sorry the place is already taken.")
            continue
        else:
            board[move]=turn
            count+=1
            print(DisplayBoard())
        
            
        if count>=5:
            if board[6] == board[7] == board[8] != '-': # across the top
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")                
                break
            elif board[3] == board[4] == board[5] != '-': # across the middle
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif board[0] == board[1] == board[2] != '-': # across the bottom
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif board[0] == board[3] == board[6] != '-': # down the left side
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif board[1] == board[4] == board[7] != '-': # down the middle
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif board[2] == board[5] == board[8] != '-': # down the right side
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break 
            elif board[6] == board[4] == board[2] != '-': # diagonal
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif board[0] == board[4] == board[8] != '-': # diagonal
                print(DisplayBoard())
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break 
            if count == 9:
                print("\n End of the Game \n")
                print("Its a tie.")
                
        if turn == "X":
            turn = "O"
        elif turn == "O":
            turn = "X"
            
            
playGame()
        
