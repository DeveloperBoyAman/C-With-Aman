// Star Pattern

/*

    Pattern 19.

  *****     *****
 *******   *******
********* *********
******-AMAN-*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *




*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    int i, j, rows = 13, cols = 19;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i <= 3)
                if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i))
                    printf("*");
                else
                    printf(" ");
            else if (i == 4)
                if (j == 7)
                    printf("-");
                else if (j == 8)
                    printf("A");
                else if (j == 9)
                    printf("M");
                else if (j == 10)
                    printf("A");
                else if (j == 11)
                    printf("N");
                else if (j == 12)
                    printf("-");
                else
                    printf("*");
            else if (j >= i - 3 && j <= 23 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
