// C Program - Assume Price of 1 USD is INR 76.23 . WAP to Take Amount in INR and Conver it into USD

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float INR , USD;
    printf("\nEnter Amount in INR => ");
    scanf("%f",&INR);
    USD = INR / 76.33;
    printf("INR (%.2f) Converted in USD => %.2f",INR,USD);

    getch();
    return 0;
}
// Main Function End
