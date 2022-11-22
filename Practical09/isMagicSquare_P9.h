#include <stdio.h>

int isMagicSquare (int **square, const int n)
{
    if (n < 0)
    {
        return 0;
    }
    int magic_num= 0;
    int off_diag_sum=0;
    int i, j;
    for (i=0; i < n; i++)
    {
        magic_num += square[i][i]; 
        off_diag_sum += square[i][n- i - 1];
    }
    if (off_diag_sum != magic_num)
    {
        printf("off_diag equals %d and magic_num equals %d\n", off_diag_sum,magic_num);
        printf("the off_diag is not the same as the diag\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        int rowSum = 0;
        int colSum = 0; 
        for (j = 0; j < n; j++)
        {
            rowSum += square[i][j]; 
            colSum += square[j][i];
        }
        if (rowSum != magic_num || colSum != magic_num)
        {
            return 0;
        }
    }
    // Return if square is magic
    return 1;
}
