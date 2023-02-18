
// C Program to Find Second Largest Number of An Array . Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{
    int n;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &n);
    int a[n];
    printf("\n>>>>>>>>>>> Enter %d Numbers <<<<<<<<<\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // 1st Approach => Using Sorting Bubble Sort
    // int temp;
    // for (int i = 0; i < 10 - 1; i++)
    // {
    //     for (int j = 0; j < 10 - i - 1; j++)
    //     {
    //         if (a[j] > a[j + 1])
    //         {
    //             temp = a[j];
    //             a[j] = a[j + 1];
    //             a[j + 1] = temp;
    //         }
    //     }
    // }
    // printf("\nSecond Largest Number => %d", a[n - 2]);

    // 2nd Approach
    int secondLargest = a[0], largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest)
            secondLargest = a[i];
    }
    printf("\nSecond Largest Number => %d", secondLargest);

    getch();
    return 0;
}
// Main Function End
