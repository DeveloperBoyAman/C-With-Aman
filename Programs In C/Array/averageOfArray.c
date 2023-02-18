
// C Program to Calculate Average of Numbers Stored in An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int numbers[10], sum = 0;
    float average;

    puts("\n>>>>>>>>>>> Enter 10 Numbers <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);

    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    average = sum / 10.0;

    printf("\nAverage of Entered Numbers => %.2f", average);

    getch();
    return 0;
}
// Main Function End
