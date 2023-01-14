// C Program to Takes Cost Price and Selling Price of a Product From User . Calculate and Print Profit or Loss Percentage

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float costPrice, sellPrice, percentage;
    printf("\nEnter Cost Price => ");
    scanf("%f", &costPrice);
    printf("\nEnter Selling Price => ");
    scanf("%f", &sellPrice);
    percentage = (sellPrice - costPrice) / costPrice * 100;
    if (percentage > 0)
        printf("\nProfit => %.2f%%\n", percentage);
    else if (percentage)
        printf("\nLoss => %.2f%%\n", -percentage);
    else
        printf("\nNeither Profit Nor Loss");

    getch();
    return 0;
}
// Main Function End
