// C Program Print First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int N;
    printf("\nEnter A Number => ");
    scanf("%d", &N);
    printf("\n>>>>>>>>>>>>> First %d Natural Numbers <<<<<<<<<<<<<<\n", N);
    for (int i = 1; i <= N; i++)
        printf("%d ", i);

    getch();
    return 0;
}
// Main Function End