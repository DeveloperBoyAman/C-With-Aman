// C Program Print First N Odd Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int N;
    printf("\nEnter A Number => ");
    scanf("%d", &N);
    printf("\n>>>>>>>>>>>>> First %d Odd Natural Numbers <<<<<<<<<<<<<<\n", N);
    for (int i = 1; i <= N; i++)
        printf("%d ", i * 2 - 1);

    getch();
    return 0;
}
// Main Function End