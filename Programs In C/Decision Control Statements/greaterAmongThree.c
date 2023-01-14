// C Program to Print Greater Among Three Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float num1, num2, num3;
    printf("\nEnter Three Numbers => ");
    scanf("%f%f%f", &num1, &num2, &num3);

    // Using if-else
    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //         printf("%.2f is Greater", num1);
    //     else
    //         printf("%.2f is Greater", num3);
    // }
    // else if (num2 > num3)
    //     printf("%.2f is Greater", num2);
    // else
    //     printf("%.2f is Greater", num3);

    // Using if-else ladder
    // if (num1 > num2 && num1 > num3)
    //     printf("%.2f is Greater", num1);
    // else if (num2 > num3)
    //     printf("%.2f is Greater", num2);
    // else
    //     printf("%.2f is Greater", num3);

    // Using Conditional Operator
    printf("%.2f is Greater", num1 > num2 && num1 > num3 ? num1 : num2 > num3 ? num2 : num3);

    getch();
    return 0;
}
// Main Function End
