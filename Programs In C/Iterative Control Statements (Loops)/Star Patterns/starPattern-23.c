// Star Pattern

/*

    Pattern 23.

    A B C
    D E F
    G H I


*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int rows;
    char ch = 'A';
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
            printf("%c ", ch++);
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
