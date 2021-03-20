#include <algorithm>
#define INF 10000000


int backTrack(vector<vector<bool>>& mat, vector<vector<bool>>& visited, 
                int i, int j,    
                int x, int y,    
                int n, int m)    
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return INF;
    }

    if (mat[i][j] == 0 || visited[i][j])
    {
        return INF;
    }

    if (i == x && j == y)
    {
        return 1;
    }

    visited[i][j] = 1;

    int moveLeft = backTrack(mat, visited, i, j - 1, x, y, n, m);

    int moveRight = backTrack(mat, visited, i, j + 1, x, y, n, m);
    
    int moveUp = backTrack(mat, visited, i - 1, j, x, y, n, m);
    
    int moveDown = backTrack(mat, visited, i + 1, j, x, y, n, m);
    
    visited[i][j] = 0;

    return 1 + min({moveDown, moveUp, moveRight, moveLeft});
}

int findShortestPath(vector<vector<bool>>& mat, 
                        int sourceX, int sourceY,  
                        int destX, int destY,  
                        int n, int m)
{
    
    vector<vector<bool>> visited(n, vector<bool>(m, 0));

    int steps = backTrack(mat, visited, sourceX, sourceY, destX, destY, n, m);

    if(steps >= INF) 
    {
        return -1;
    }

    return steps;
}
