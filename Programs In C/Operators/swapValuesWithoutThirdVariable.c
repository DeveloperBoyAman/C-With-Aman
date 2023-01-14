// C Program to Swap Values of Two int Variables Without Third Variable

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{
    int a, b;
    printf("\n>>>>>>>> Enter Two Numbers <<<<<<<<\n");
    printf("\nEnter a => ");
    scanf("%d", &a);
    printf("\nEnter b => ");
    scanf("%d", &b);
    printf("\n>>>>>>>> Before Swapping <<<<<<<<\n");
    printf("\na => %d\nb => %d", a, b);

    // // 1st Way of Swapping Two Variables (In One Statement)
    b = (a + b) - (a = b);

    // 2nd Way of Swapping Two Variables (Using Addition)
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // 3rd Way of Swapping Two Variables (Using Product)
    // a = a * b;
    // b = a / b;
    // a = a / b;

    // 4th Way of Swapping Two Variables (Using Bitwise XOR ^ Operator)
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    printf("\n\n>>>>>>>> After Swapping <<<<<<<<\n");
    printf("\na => %d\nb => %d\n", a, b);

    getch();
    return 0;
}
// Main Function End
