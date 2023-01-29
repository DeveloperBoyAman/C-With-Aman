// C Program to Find Roots of a Quadratic Equation are Real and Distinct , Real and Equal or Imaginary

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float a, b, c, discriminant;
    printf("\nEnter Coefficients a,b and c => ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
        printf("Roots Are Real and Distnict");
    else if (discriminant)
        printf("Roots Are Imaginary");
    else
        printf("Roots Are Real and Equal");
    

    getch();
    return 0;
}
// Main Function End
