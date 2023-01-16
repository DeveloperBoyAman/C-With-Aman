// C Program to Print Star Pattern

/*


ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A

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
            printf("%c", 'A' - 1 + j);

        for (int space = 1; space <= (i - 1) * 2 - 1; space++)
            printf(" ");

        for (int k = i == 1 ? rows - i : rows + 1 - i; k >= 1; k--)
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
    //         if (j <= rows + 1 - i || j >= rows - 1 + i)
    //             printf("%c", k);
    //         else
    //             printf(" ");
    //         j < rows ? k++ : k--;
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
// Main Function End
