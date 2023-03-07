// C Program to Print Following Pattern

/*

    Pattern 42.

       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    int rows,  num;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        num = row & 1 ? 1 : 0;
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", num);
            num = 1 - num;
        }
        printf("\n");
    }

    // //  2nd Approach
    // int rows, start = 1, num;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     num = start;
    //     for (int col = 1; col <= row; col++)
    //     {
    //         printf("%d ", num);
    //         num = 1 - num;
    //     }
    //     start = 1 - start;
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

