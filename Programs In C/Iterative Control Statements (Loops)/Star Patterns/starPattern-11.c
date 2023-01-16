// C Program to Print Star Pattern

/*


    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

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
            printf("%c", 'A' - 1 + j);

        for (int k = i - 1; k >= 1; k--)
            printf("%c", 'A' + k - 1);

        putch('\n');
    }

    /**************** 2nd Approach *******************/
    // int rows, k;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // putch('\n');
    // for (int i = 1; i <= rows; i++)
    // {
    //     k = 'A';
    //     for (int j = 1; j <= rows * 2 - 1; j++)
    //     {
    //         if (j >= rows + 1 - i && j <= rows - 1 + i)
    //         {
    //             printf("%c", k);
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
// Main Function End
