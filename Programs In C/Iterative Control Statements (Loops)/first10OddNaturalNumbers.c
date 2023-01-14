// C Program Print First 10 Odd Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    // Using While Loop
    // int i = 1;
    // printf("\n>>>>>>>>>>>>> First 10 Odd Natural Numbers <<<<<<<<<<<<<<\n");
    // while (i <= 10)
    //     printf("%d ", i++ * 2 - 1);

    // Using For Loop
    printf("\n>>>>>>>>>>>>> First 10 Odd Natural Numbers <<<<<<<<<<<<<<\n");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * 2 - 1);

    // Using Do While Loop
    // int i = 1;
    // printf("\n>>>>>>>>>>>>> First 10 Odd Natural Numbers <<<<<<<<<<<<<<\n");
    // do
    // {
    //     printf("%d ", i++ * 2 - 1);
    // } while (i <= 10);

    getch();
    return 0;
}
// Main Function End
