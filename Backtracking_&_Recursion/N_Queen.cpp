#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(vector<string>& board, int row, int col, int n) {
        // Upward check for any queen in the same column
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Left diagonal check
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Right diagonal check
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void solve(vector<string>& board, int row, int n, vector<vector<string>>& output) {
        // Base case
        if (row >= n) {
            output.push_back(board);
            return;
        }

        // Traverse all columns to check
        for (int col = 0; col < n; col++) {
            if (isValid(board, row, col, n)) {
                // Place queen
                board[row][col] = 'Q';
                solve(board, row + 1, n, output);
                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> output;
        solve(board, 0, n, output);
        return output;
    }
};
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(vector<string>& board, int row, int col, int n) {
        // Upward check for any queen in the same column
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Left diagonal check
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Right diagonal check
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void solve(vector<string>& board, int row, int n, vector<vector<string>>& output) {
        // Base case
        if (row >= n) {
            output.push_back(board);
            return;
        }

        // Traverse all columns to check
        for (int col = 0; col < n; col++) {
            if (isValid(board, row, col, n)) {
                // Place queen
                board[row][col] = 'Q';
                solve(board, row + 1, n, output);
                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> output;
        solve(board, 0, n, output);
        return output;
    }
};
