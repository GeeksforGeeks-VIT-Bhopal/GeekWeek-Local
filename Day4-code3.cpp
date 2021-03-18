class Solution {
public:
    typedef pair<int, int> pii;
    typedef pair<pii, int> piii;

    bool depthFirstSearch(vector<vector<char> >&board, const string& word, pii pos) {
        piii current(pos, 0);
        int level = 0;
        pii next;
        stack<piii> dfs;
        dfs.push(current);
        int n[][2] = {{-1,0},{1,0},{0,1},{0,-1}};

        while (!dfs.empty()) {
            level = dfs.top().second;
            if (level+1 == word.size()) return true;
            pos = dfs.top().first;

            if (!(board[pos.first][pos.second] & 1 << 7)) {
                //mark as visited
                board[pos.first][pos.second] |= (1 << 7);
            } else {
                //unmark as visited, pop queue
                board[pos.first][pos.second] &= ~(1 << 7);
                dfs.pop();
                continue;
            }

            for (int i=0; i < 4; i++) {
                next = pii(pos.first+n[i][0], pos.second+n[i][1]);
                if (next.first < 0 ||  next.first >= board.size() || next.second < 0 || next.second >= board[0].size())
                    continue;

                //Due to the trick of setting the MSB as 1 to mark a cell as visited,
                //when marked as such, the condition below will never be satisfied.
                //So one does not have to check if cell has been visited
                if (board[next.first][next.second] != word[level+1])
                    continue;

                dfs.push(piii(next, level+1));
            }
        }

        return false;
    }

    bool exist(vector<vector<char> > &board, string word) {
        if (!word.size()) return false;

        for (int i=0; i < board.size(); i++)
            for (int j=0; j < board[0].size(); j++)
                if (board[i][j] == word[0] && depthFirstSearch(board,word, pii(i,j))) 
                    return true;
        return false;
    }
};
