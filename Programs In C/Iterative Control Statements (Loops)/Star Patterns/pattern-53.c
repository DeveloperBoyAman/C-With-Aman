// C Program to Print Following Pattern

/*

    Pattern 53.

       a
       B c
       D e F
       g H i J
       k L m N o

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, toggle = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    char ch = 'a';
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= cols; col++)
        {
            if (col <= row)
            {
                if (toggle)
                    printf("%c ", ch);
                else
                    printf("%c ", ch - 32);
                toggle = 1 - toggle;
                ch++;
            }
            else
                printf("  ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // int rows, toggle = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // char ch = 'a';
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         if (toggle)
    //             printf("%c ", ch);
    //         else
    //             printf("%c ", ch - 32);
    //         toggle = 1 - toggle;
    //         ch++;
    //     }
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

