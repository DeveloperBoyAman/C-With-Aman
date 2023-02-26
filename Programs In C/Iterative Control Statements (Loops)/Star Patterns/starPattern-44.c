// Star Pattern

/*

    Pattern 44.

           *      *
         *   *  *   *
       *      *      *

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
    cols = rows * rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= cols; col++)
        {
            if (col == rows + 1 - row || col == rows - 1 + row || col == rows * 2 + 2 - row || col == rows * 2 + row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
// Main Function End
