// C Program to Calculate Sum of Numbers Stored in An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int numbers[10], sum = 0;
    printf("\nEnter 10 Numbers => \n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);
    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    printf("\nSum of Numbers => %d", sum);
    
    
    getch();
    return 0;
}
// Main Function End
