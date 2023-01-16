// C Program to Print Star Pattern

/*

    1
   121
  12321
 1234321
123454321

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
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int k = i - 1; k >= 1; k--)
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
    //         if (j >= rows + 1 - i && j <= rows - 1 + i)
    //         {
    //             printf("%d", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
