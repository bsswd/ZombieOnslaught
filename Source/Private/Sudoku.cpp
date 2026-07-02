#include "../Public/Sudoku.h"

#include <array>

bool Sudoku::validate(const std::array<std::array<int, 9>, 9>& board)
{
    int rows[9] = {0};
    int cols[9] = {0};
    int boxes[9] = {0};

    
    const int FULL_MASK = (1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | 
                          (1 << 5) | (1 << 6) | (1 << 7) | (1 << 8) | 
                          (1 << 9); 

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            int val = board[i][j];
            
            if (val == 0) continue;
            if (val < 1 || val > 9) return false;

            int bit = 1 << val;
            int box_idx = (i / 3) * 3 + (j / 3);

            if ((rows[i] & bit) || (cols[j] & bit) || (boxes[box_idx] & bit)) return false;
            
            rows[i] |= bit;
            cols[j] |= bit;
            boxes[box_idx] |= bit;
        }
    }
   
    for (int i = 0; i < 9; ++i)
    {
        if (rows[i] != FULL_MASK)  return false;
        if (cols[i] != FULL_MASK)  return false;
        if (boxes[i] != FULL_MASK) return false;
    }

    return true;
}