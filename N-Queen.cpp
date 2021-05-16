class Solution {
public:
    int n;
    
    void backtrack(vector<bool>& used_col, vector<bool>& used_pos_diag, 
                   vector<bool>& used_neg_diag, int r, 
                   vector<int>& curpos, vector<vector<string>>& ans){
        if(r == n){
            vector<string> curans;
            for(int i = 0; i < n; ++i){
                string row(n, '.');
                row[curpos[i]] = 'Q';
                curans.push_back(row);
            }
            ans.push_back(curans);
        }else{
            for(int c = 0; c < n; ++c){
                if(!used_col[c] && !used_pos_diag[r-c+n-1] && !used_neg_diag[r+c]){
                    curpos.push_back(c);
                    used_col[c] = true;
                    used_pos_diag[r-c+n-1] = true;
                    used_neg_diag[r+c] = true;
                    
                    backtrack(used_col, used_pos_diag, used_neg_diag, r+1, curpos, ans);
                    
                    used_col[c] = false;
                    used_pos_diag[r-c+n-1] = false;
                    used_neg_diag[r+c] = false;
                    curpos.pop_back();
                }
            }
        }
    };
    
    vector<vector<string>> solveNQueens(int n) {
        this->n = n;
        vector<int> curpos;
        vector<vector<string>> ans;
        vector<bool> used_col(n, false);
        vector<bool> used_pos_diag(2*n-1, false);
        vector<bool> used_neg_diag(2*n-1, false);
        
        backtrack(used_col, used_pos_diag, used_neg_diag, 0, curpos, ans);
        
        return ans;
    }
};
