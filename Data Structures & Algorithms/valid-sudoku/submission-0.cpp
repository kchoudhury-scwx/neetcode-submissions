class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9); // vector of sets to check the row duplicates
        vector<unordered_set<char>> cols(9); // vector of sets to check column duplicates
        vector<unordered_set<char>> grids(9); // vector of sets to check the grid duplicates
        int boxIndex;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char value = board[i][j];
                if(value == '.')
                continue;
                boxIndex = (i/3) + (j/3)*3;
                if(rows[i].count(value) || cols[j].count(value) || grids[boxIndex].count(value))
                return false;
                rows[i].insert(value);
                cols[j].insert(value);
                grids[boxIndex].insert(value);
            }
        }
        return true;
    }
};
