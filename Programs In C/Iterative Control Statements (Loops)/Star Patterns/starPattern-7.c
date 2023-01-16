// C Program to Print Star Pattern

/*

**********
****  ****
***    ***
**      **
*        *

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
        for (int j = 1; j <= rows + 1 - i; j++)
            printf("*");
        for (int space = 1; space <= i * 2 - 2; space++)
            printf(" ");
        for (int j = 1; j <= rows + 1 - i; j++)
            printf("*");
        putch('\n');
    }

    /**************** 2nd Approach *******************/
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // putch('\n');
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows * 2; j++)
    //     {
    //         if (j <= rows + 1 - i || j >= rows + i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
// Main Function End
