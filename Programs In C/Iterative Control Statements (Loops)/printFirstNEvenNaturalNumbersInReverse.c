// C Program Print First N Even Natural Numbers In Reverse Order

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int N;
    printf("\nEnter A Number => ");
    scanf("%d", &N);
    printf("\n>>>>>>>>>>>>> First %d Even Natural Numbers In Reverse Order <<<<<<<<<<<<<<\n", N);
    for (int i = N; i > 0; i++)
        printf("%d ", i * 2);

    getch();
    return 0;
}
// Main Function End