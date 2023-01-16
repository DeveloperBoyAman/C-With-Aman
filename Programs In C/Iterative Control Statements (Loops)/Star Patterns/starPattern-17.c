// C Program to Print Star Pattern

/*


*********
 *     * 
  *   *  
   * *   
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
        for (int j = 1; j <= rows * 2 - (i * 2 - 1); j++)
            if (j == 1 || j == rows * 2 - (i * 2 - 1) || i == 1)
                printf("*");
            else
                printf(" ");
        putch('\n');
    }

    /**************** 2nd Approach *******************/
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // putch('\n');
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows * 2 - 1; j++)
    //     {
    //         if (j == i || j == rows * 2 - i || i == 1)
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
