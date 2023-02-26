// Star Pattern

/*

    Pattern 51.

         4 4 4 4 4 4 4
         4 3 3 3 3 3 4
         4 3 2 2 2 3 4
         4 3 2 1 2 3 4
         4 3 2 2 2 3 4
         4 3 3 3 3 3 4
         4 4 4 4 4 4 4


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, count = 1, n, k;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    if (rows % 2 == 0)
        rows++;
    cols = rows;
    n = (rows + 1) / 2;
    k = n;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        k = n;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= count && col <= cols + 1 - count)
                printf("%d ", n + 1 - count);
            else if (col < n)
                printf("%d ", k--);
            else
                printf("%d ", k++);

            if (col == n)
                k++;
        }

        row < n ? count++ : count--;
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
