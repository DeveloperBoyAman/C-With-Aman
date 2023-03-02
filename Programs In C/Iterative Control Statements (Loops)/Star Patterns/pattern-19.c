// C Program to Print Following Pattern

/*

    Pattern 19.

  *****     *****
 *******   *******
********* *********
*******AMAN********
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

// Main Function Start
int main()
{

    int rows = 13, cols = 19;
    printf("\n\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (row <= 3)
            {
                if (col >= 4 - row && col <= 7 - 1 + row || col >= 14 - row && col <= 17 - 1 + row)
                    printf("*");
                else
                    printf(" ");
            }
            else if (row == 4)
            {
                if (col <= 7 || col >= 12)
                    printf("*");
                else
                {
                    printf("AMAN");
                    col += 3;
                }
            }
            else
            {
                if (col >= row - 3 && col <= cols - (row - 4))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
