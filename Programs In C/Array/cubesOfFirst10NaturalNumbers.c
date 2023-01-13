// C Program Print Cubes of First 10 Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    // Using While Loop
    // int i = 1;
    // printf("\n>>>>>>>>>>>>> Cubes of First 10 Natural Numbers <<<<<<<<<<<<<<\n");
    // while (i <= 10){
    //     printf("%d ", i * i * i);
    //     i++;
    // }

    // Using For Loop
    printf("\n>>>>>>>>>>>>> Cubes of First 10 Natural Numbers <<<<<<<<<<<<<<\n");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * i * i);

    // Using Do While Loop
    // int i=1;
    // printf("\n>>>>>>>>>>>>> Cubes of First 10 Natural Numbers <<<<<<<<<<<<<<\n");
    // do
    // {
    //     printf("%d ", i* i *i);
    //     i++;
    // } while (i <= 10);

    getch();
    return 0;
}
// Main Function End
