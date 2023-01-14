// C Program to Print All Prime Numbers Under 100

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int i, j, quotient;
    printf("\n>>>>>>>>>>>> All Prime Numbers Under 100 Are <<<<<<<<<<<<<<\n");
    printf("2 ");
    for (i = 3; i < 100; i += 2)
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
