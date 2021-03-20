public class ABCPath {
    private int runningScore = 0;
    private int maxScore = 0;

    /**
     * Method to find the length of the longest path of consecutive letters, starting at 'A'.
     * @param grid the grid to traverse
     * @return longest path of consecutive letters
     */
    public int length(String[] grid) {
        // find the index of all 'A' chars
        for(int row=0; row < grid.length; row++) {
            for(int col=0; col < grid[0].length(); col++) {
                // for each 'A' index, begin a search looking up, down, right, left for greater chars
                if('A' == grid[row].charAt(col)) {
                    beginSearch(grid, row, col);
                }
            }
        }

        return maxScore;
    }

    /*
    Given a valid row/col, this method will search for the next char in the sequence
    updating runningScore until its impossible, at which point maxScore will be
    updated if the runningScore has exceeded it.
     */
    private void beginSearch(final String[] grid, final int row, final int col) {
        runningScore++;

        // check up
        if(row>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col)) {
            beginSearch(grid, row-1, col);
        }
        // check down
        if(row<grid.length-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col)) {
            beginSearch(grid, row+1, col);
        }
        // check left
        if(col>0 && grid[row].charAt(col)+1 == grid[row].charAt(col-1)) {
            beginSearch(grid, row, col-1);
        }
        // check right
        if(col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row].charAt(col+1)) {
            beginSearch(grid, row, col+1);
        }
        // check upper left
        if(row>0 && col>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col-1)) {
            beginSearch(grid, row-1, col-1);
        }
        // check upper right
        if(row>0 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row-1].charAt(col+1)) {
            beginSearch(grid, row-1, col+1);
        }
        // check bottom left
        if(row<grid.length-1 && col>0 && grid[row].charAt(col)+1 == grid[row+1].charAt(col-1)) {
            beginSearch(grid, row+1, col-1);
        }
        // check bottom right
        if(row<grid.length-1 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col+1)) {
            beginSearch(grid, row+1, col+1);
        }

        // update maxScore
        if(!(row>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col))
                && !(row<grid.length-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col))
                && !(col>0 && grid[row].charAt(col)+1 == grid[row].charAt(col-1))
                && !(col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row].charAt(col+1))
                && !(row>0 && col>0 && grid[row].charAt(col)+1 == grid[row-1].charAt(col-1))
                && !(row>0 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row-1].charAt(col+1))
                && !(row<grid.length-1 && col>0 && grid[row].charAt(col)+1 == grid[row+1].charAt(col-1))
                && !(row<grid.length-1 && col<grid[0].length()-1 && grid[row].charAt(col)+1 == grid[row+1].charAt(col+1))
        ) {
            if(maxScore<runningScore)
                maxScore = runningScore;
            runningScore = 0;
        }
    }
}