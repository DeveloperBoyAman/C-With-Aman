// C Program to Find Greatest Number Stored in An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int numbers[10], greatest;

    puts("\n>>>>>>>>>>> Enter 10 Numbers <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);

    greatest = numbers[0];
    for (int i = 1; i < 10; i++)
        if (numbers[i] > greatest)
            greatest = numbers[i];

    printf("\nGreatest Number => %d", greatest);

    getch();
    return 0;
}
// Main Function End
