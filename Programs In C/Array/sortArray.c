// C Program to Sort Elements of An Array of Size 10. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int a[10], temp;

    printf("\n>>>>>>>>>>> Enter 10 Numbers <<<<<<<<<\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    puts("\n\n>>>>>>>>>> Numbers Before Sorting <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    // Bubble Sort
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    puts("\n\n>>>>>>>>>> Numbers After Sorting <<<<<<<<<<<<");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
        
    getch();
    return 0;
}
// Main Function End
