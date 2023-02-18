// C Program to Find Smallest Number Stored in An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int numbers[10], smallest;

    puts("\n>>>>>>>>>>> Enter 10 Numbers <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);

    smallest = numbers[0];
    for (int i = 1; i < 10; i++)
        if (numbers[i] > smallest)
            smallest = numbers[i];

    printf("\nSmallest Number => %d", smallest);

    getch();
    return 0;
}
// Main Function End
