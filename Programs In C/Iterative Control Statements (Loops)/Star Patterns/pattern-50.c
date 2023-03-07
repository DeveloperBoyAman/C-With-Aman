// C Program to Print Following Pattern

/*

    Pattern 50.

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
#include <math.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int num, rows, cols, k = 1, midOfRows, count;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    cols = rows = num * 2 - 1;
    midOfRows = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        count = num;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= k && col <= cols + 1 - k)
                printf("%d ", midOfRows + 1 - k);
            else
                printf("%d ", count);

            col < midOfRows ? count-- : count++;
        }
        row < midOfRows ? k++ : k--;
        printf("\n");
    }

    // // 2nd Approach
    // int rows, num, element, left, right, upper, lower;
    // printf("\nEnter A Number => ");
    // scanf("%d", &num);
    // rows = num * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= rows; col++)
    //     {
    //         upper = row - 1;
    //         left = col - 1;
    //         lower = rows - row;
    //         right = rows - col;

    //         if (upper < left && upper < lower && upper < right)
    //             element = upper;
    //         else if (left < lower && left < right)
    //             element = left;
    //         else if (lower < right)
    //             element = lower;
    //         else
    //             element = right;

    //         printf("%d ", num - element);
    //     }
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

