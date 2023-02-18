// C Program to Calculate Sum of All Even Numbers And All Odd Numbers Stored in An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int numbers[10], sumOfEven = 0, sumOfOdd = 0;

    puts("\n>>>>>>>>>>> Enter 10 Numbers <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] & 1)
            sumOfOdd += numbers[i];
        else
            sumOfEven += numbers[i];
    }

    printf("\nSum of All Even Numbers => %d", sumOfEven);
    printf("\nSum of All Odd Numbers => %d", sumOfOdd);

    getch();
    return 0;
}
// Main Function End
