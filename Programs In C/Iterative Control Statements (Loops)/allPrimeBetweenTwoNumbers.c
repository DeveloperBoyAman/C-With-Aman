// C Program to Print All Prime Numbers Between Two Given Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int upper, lower, i, j, quotient;
    printf("\nEnter Two Numbers to Print All Prime Numbers Between Them => ");
    scanf("%d%d", &lower, &upper);
    printf("\n>>>>>>>>>>>> All Prime Numbers Between %d and %d  Are <<<<<<<<<<<<<<<\n", lower, upper);
    for (i = lower + 1; i < upper; i++)
    {
        quotient = i / 2;
        for (j = 2; j <= quotient; j++)
            if (i % j == 0)
                break;
        if (j > quotient)
            printf("%d ", i);
    }

    getch();
    return 0;
}
// Main Function End
