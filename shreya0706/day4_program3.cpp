class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int Layer = matrix.size()/2;

        /* Top, Left, Bottom, Right */
        int T = 0;
        int L = 0;
        int B = matrix.size()-1;
        int R = matrix.size()-1;
        int n = matrix.size();
        
        for( int LayerIdx = 0; LayerIdx < Layer; ++LayerIdx )
        {
            for(int i = 0; i < (n-1) ; i++) 
            {
                swap( matrix[T][L+i], matrix[T+i][R] );
                swap( matrix[T][L+i], matrix[B][R-i] );
                swap( matrix[T][L+i], matrix[B-i][L] );
            }
            T++;
            B--;
            R--;
            L++;
            n = n - 2;
        }
    }
};
