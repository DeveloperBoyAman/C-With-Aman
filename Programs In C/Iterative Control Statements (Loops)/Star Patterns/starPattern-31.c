// Star Pattern

/*

    Pattern 31.

    1 2 3
    4 5 6
    7 8 9

  */

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    int count = 1;
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
            printf("%3d  ", count++);
        printf("\n");
    }

    // // 2nd Approach
    //  int rows, cols;
    //  printf("\nHow Many Rows => ");
    //  scanf("%d", &rows);
    //  cols = rows;
    //  puts("\n--------------------------------------------\n");
    //  for (int row = 1; row <= rows; row++)
    //  {
    //      for (int col = 1; col <= cols; col++)
    //           printf("%3d  ", rows * (row - 1) + col);
    //   printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
