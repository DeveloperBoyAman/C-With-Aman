// Write A Function to Print PASCAL Triangle (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void printPascalTriangle(int);
long long int factorialOfN(int);

// Main Function Start
int main()
{
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    printf("\n");
    printf("\n------------------------- PASCAl TRIANGLE HAVING %d ROWS ----------------------\n\n", rows);
    printPascalTriangle(rows);

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
void printPascalTriangle(int rows)
{
    int col;
    for (int row = 0; row < rows; row++)
    {
        for (int space = 1; space <= rows - 1 - row; space++)
            printf("   ");
        col = 0;
        for (int j = 0; j < row * 2 + 1; j++)
        {
            if (j % 2)
                printf("   ");
            else
            {
                int value = factorialOfN(row) / (factorialOfN(col) * factorialOfN(row - col));
                printf(" %d ", value);
                col++;
            }
        }
        printf("\n");
    }
}

long long int factorialOfN(int num)
{
    long long int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}
