// C Program Print Cubes of First 10 Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    // Using While Loop
    // int i = 1;
    // printf("\n>>>>>>>>>>>>>> Table of 5 <<<<<<<<<<<<<<<\n");
    // while (i <= 10)
    // {
    //     printf("%d * %d => %d\n", 5, i, 5 * i);
    //     i++;
    // }

    // Using For Loop
    printf("\n>>>>>>>>>>>>>> Table of 5 <<<<<<<<<<<<<<<\n");
    for (int i = 1; i <= 10; i++)
        printf("%d * %d => %d\n", 5, i, 5 * i);

    // Using Do While Loop
    // int i = 1;
    // printf("\n>>>>>>>>>>>>> Table of 5 <<<<<<<<<<<<<<\n");
    // do
    // {
    // printf("%d * %d => %d\n", 5, i, 5 * i);
    //   i++;
    // } while (i <= 10);

    getch();
    return 0;
}
// Main Function End
