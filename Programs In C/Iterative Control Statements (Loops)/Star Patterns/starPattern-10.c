// C Program to Print Star Pattern

/*

   1234321
    12321
     121
      1

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    /**************** 1st Approach *******************/
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    putch('\n');
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= i - 1; space++)
            printf(" ");
        for (int j = 1; j <= rows - i; j++)
            printf("%d", j);
        for (int k = rows - i - 1; k >= 1; k--)
            printf("%d", k);
        putch('\n');
    }

    /**************** 2nd Approach *******************/
    // int rows, k;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // putch('\n');
    // for (int i = 1; i <= rows; i++)
    // {
    //     k = 1;
    //     for (int j = 1; j <= rows * 2 - 1; j++)
    //     {
    //         if (j >= i && j <= rows * 2 - i)
    //         {
    //             printf("%d ", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf("  ");
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
// Main Function End
