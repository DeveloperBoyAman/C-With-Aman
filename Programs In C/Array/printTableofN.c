// C Program to Print Table of N

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int N;
    printf("\nEnter A Number => ");
    scanf("%d", &N);
    printf("\n>>>>>>>>>>>>>> Table of %d <<<<<<<<<<<<<<<\n", N);
    for (int i = 1; i <= 10; i++)
        printf("%d * %2d  => %4d\n", N, i, N * i);

    getch();
    return 0;
}
// Main Function End