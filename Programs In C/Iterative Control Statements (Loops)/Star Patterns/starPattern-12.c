// C Program to Print Star Pattern

/*


  ABCDEDCBA
   ABCDCBA
    ABCBA
     ABA
      A

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

        for (int j = 1; j <= rows + 1 - i; j++)
            printf("%c", 'A' - 1 + j);

        for (int k = rows - i; k >= 1; k--)
            printf("%c", 'A' - 1 + k);

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
    //         if (j >= i && j <= rows * 2 - i)
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
