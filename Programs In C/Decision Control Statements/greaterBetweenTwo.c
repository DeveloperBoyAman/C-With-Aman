// C Program to Print Greater Between two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float num1, num2;
    printf("\nEnter Two Numbers => ");
    scanf("%f%f", &num1, &num2);
    if (num1 > num2)
        printf("\n%.2f is Greater than %.2f", num1, num2);
    else if (num1 < num2)
        printf("\n%.2f is Greater than %.2f", num2, num1);
    else
        printf("Numbers Are Same");

    getch();
    return 0;
}
// Main Function End
