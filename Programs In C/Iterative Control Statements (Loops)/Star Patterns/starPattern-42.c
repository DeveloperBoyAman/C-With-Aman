// Star Pattern

/*

    Pattern 42.

       ****
       *  *
       *  *
       *  *
       ****


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (row == 1 || row == rows || col == 1 || col == cols)
                printf("*");
            else
                putch(32);
        }
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
