
// C Program to Print Star Pattern

/*

*****
 ****
  ***
   **
    *

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
        for (int j = i; j <= rows; j++)
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
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (j <= rows + 1 - i)
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
