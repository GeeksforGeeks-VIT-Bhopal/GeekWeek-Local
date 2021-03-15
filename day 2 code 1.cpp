bool isValid(int x, int y, vector<string> &grid)
{
    int rowSize = grid.size(), columnSize = grid[0].size();

    if (x >= 0 and x < rowSize and y >= 0 and y < columnSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int direction[4][2] = {{1, 0}, { -1, 0}, {0, 1}, {0, -1}};

int countPaths(int curX, int curY, vector<string> &grid, string &s, int curIndex, vector<vector<bool>> &visited)
{
    if (curIndex == s.size() - 1)
    {
        if (s[curIndex] == grid[curX][curY])
        {
            return 1;
        }
    }
    if (s[curIndex] != grid[curX][curY])
    {
        return 0;
    }

    int count = 0;
    visited[curX][curY] = true;
    
    for (int i = 0; i < 4; i++)
    {
        int x = curX + direction[i][0];
        int y = curY + direction[i][1];
        if (isValid(x, y, grid) == true and visited[x][y] == false)
        {
            count += countPaths(x, y, grid, s, curIndex + 1, visited);
        }
    }

    return count;
}

int countStrings(int n, int m, vector<string> &grid, string &s)
{
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vector<vector<bool>> visited(n, vector<bool>(m, false));
            int x = i, y = j;
            answer += countPaths(x, y, grid, s, 0, visited);
        }
    }

    return answer;
}

