// Star Pattern

/*

    Pattern 50.


       1      1
       12    21
       123  321
       12344321

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    // int rows, cols, count;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     count = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= row || col >= cols + 1 - row)
    //             printf("%d ", count);
    //         else
    //             printf("  ");
    //         if (col == rows)
    //             count++;
    //         col < rows ? count++ : count--;
    //     }
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= row; col++)
            printf("%d ", col);

        for (int space = 1; space <= rows * 2 - (row * 2); space++)
            printf("  ");

        for (int col = row; col >= 1; col--)
            printf("%d ", col);

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
