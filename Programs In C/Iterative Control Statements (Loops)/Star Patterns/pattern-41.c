// C Program to Print Following Pattern

/*

    Pattern 41.

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

    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (row == 1 || col == 1 || col == cols || row == rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End

