// C Program to take Length of Sides of Triangle as an input . Display Whether the Triangle is Valid or Not

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float side1, side2, side3;
    printf("\nEnter The Length of Sides of A Triangle => ");
    scanf("%f%f%f", &side1, &side2, &side3);
    if ((side1 + side2 >= side3) && (side1 + side3 >= side2) && (side2 + side3 >= side1))
        printf("Traiangle is Valid");
    else
        printf("Triangle is Not Valid");

    getch();
    return 0;
}
// Main Function End
