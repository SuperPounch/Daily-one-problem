//
// Created by 李啸 on 2022/10/6.
//有效的数独：判断已有的数字是否符合数独的规则
#include "iostream"
#include "vector"

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        //hasp<<int[][]<<">>j"
        int row[9][10] = {0}, col[9][10] = {0}, block[9][10] = {0};
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')continue;
                int num = board[i][j] - '0';
                int idx = j / 3 + i / 3 * 3;
                if (row[i][num] || col[num][j] || block[idx][num])return false;
                else {
                    row[i][num] = 1;
                    col[num][j] = 1;
                    block[idx][num] = 1;
                }
            }
        }
        return true;
    }
};

