// C Program to Find Next Prime Number from A Given Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int i, j, num, quotient;
    printf("\nEnter A Number to Find Next Prime Number Than You Enter => ");
    scanf("%d", &num);
    for (i = num + 1; 1; i++)
    {
        quotient = i / 2;
        for (j = 2; j <= quotient; j++)
            if (i % j == 0)
                break;
        if (j > quotient)
        {
            printf("%d ", i);
            break;
        }
    }

    getch();
    return 0;
}
// Main Function End
