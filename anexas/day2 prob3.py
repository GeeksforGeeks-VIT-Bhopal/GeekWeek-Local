#counting strings
def isValid(x, y, grid):
    rowSize = len(grid)
    columnSize = len(grid[0])
    
    if x >= 0 and x < rowSize and y >= 0 and y < columnSize:
        return True
    else:
        return False

direction = [[1, 0], [-1, 0], [0, 1], [0, -1]]

def countPaths(curX, curY, grid, s, curIndex, visited):
    # Base Case
    if curIndex == len(s) - 1:
        if s[curIndex] == grid[curX][curY]:
            return 1

    
    # Return 0 as this path is invalid
    if s[curIndex] != grid[curX][curY]:
        return 0
    
    count = 0
    visited[curX][curY] = True
    
    # Visit all neighbours of curX and curY
    for i in range(4):
        x = curX + direction[i][0]
        y = curY + direction[i][1]
        if isValid(x, y, grid) == True and visited[x][y] == False:
            count += countPaths(x, y, grid, s, curIndex + 1, visited)
        
    return count

def countStrings(n: int, m: int, grid: list, s: str):
    answer = 0
    
    for i in range(n):
        for j in range(m):
            visited = [[False for t in range(m)] for k in range(n)]
            x, y = i, j
            answer += countPaths(x, y, grid, s, 0, visited)
        
    return answer
