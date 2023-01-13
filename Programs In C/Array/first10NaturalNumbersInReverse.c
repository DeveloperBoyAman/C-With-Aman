// C Program Print First 10 Natural Numbers In Reverse Order

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    // Using While Loop
    // int i = 10;
    // printf("\n>>>>>>>> First 10 Natural Numbers in Reverse Order <<<<<<<<<\n");
    // while (i > 0)
    //     printf("%d ", i--);

    // Using For Loop
    printf("\n>>>>>>>> First 10 Natural Numbers in Reverse Order <<<<<<<<<\n");
    for (int i = 10; i > 0; i--)
        printf("%d ", i);

    // Using Do While Loop
    // int i = 10;
    // printf("\n>>>>>>>> First 10 Natural Numbers in Reverse Order <<<<<<<<<\n");
    // do
    // {
    //     printf("%d ", i--);
    // } while (i > 0);

    getch();
    return 0;
}
// Main Function End
