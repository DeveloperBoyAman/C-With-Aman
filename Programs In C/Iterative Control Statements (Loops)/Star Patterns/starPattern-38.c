// Star Pattern

/*

    Pattern 38.

              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

      Pascal Traingle

      1st Formula =>  row! / ( col! * (row-col)! )  ----> row =  0 1 2 ...... N and col = 0 1 2 ..... N

      2nd Formula => n =  n * (row - col) / (col + 1)   ----> n Starts with 0 for Each Row , And Print n to get Element .  row =  0 1 2 ...... N and col = 0 1 2 ..... N


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols, lock, colno, n;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     lock = colno = n = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (lock && col >= rows + 1 - row && col <= rows - 1 + row)
    //         {
    //             printf(" %d ", n);
    //             n = n * (row - 1 - (colno - 1)) / (colno - 1 + 1);
    //             lock = 0;
    //             colno++;
    //         }
    //         else
    //         {
    //             printf("   ");
    //             lock = 1;
    //         }
    //     }

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, lock, n, colno;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 0; row < rows; row++)
    {
        lock = n = 1;
        colno = 0;

        for (int space = 0; space <= rows - 1 - row; space++)
            printf("   ");

        for (int col = 0; col < row * 2 + 1; col++)
        {
            if (lock)
            {
                printf(" %d ", n);
                n = n * (row - colno) / (colno + 1);
                colno++;
            }
            else
                printf("   ");

            lock = 1 - lock;
        }

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
