// Star Pattern

/*

    Pattern 43.

       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols, count;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     count = row & 1 ? 1 : 0;

    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= row)
    //             printf("%d", count);
    //         else
    //             putch(32);

    //         count = 1 - count;
    //     }
    //     printf("\n");
    // }

    // //  2nd Approach
    int rows, count;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        count = row & 1 ? 1 : 0;

        for (int col = 1; col <= row; col++)
        {
            if (col <= row)
                printf("%d", count);

            count = !count;
        }
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
