// C Program to Swap Values of Two int Variables

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int a, b, temp;
    printf("\n>>>>>>>> Enter Two Numbers <<<<<<<<\n");
    printf("\nEnter a => ");
    scanf("%d", &a);
    printf("\nEnter b => ");
    scanf("%d", &b);
    printf("\n>>>>>>>> Before Swapping <<<<<<<<\n");
    printf("\na => %d\nb => %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\n\n>>>>>>>> After Swapping <<<<<<<<\n");
    printf("\na => %d\nb => %d\n", a, b);

    getch();
    return 0;
}
// Main Function End
