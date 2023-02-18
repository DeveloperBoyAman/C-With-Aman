// C Program to Read n Numbers In An Array and Display It in Reverse Order. Take Array Values From User

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

    puts("\n\n>>>>>>>>>>> Numbers In Normal Order <<<<<<<<<<<<<<<");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    puts("\n\n>>>>>>>>>>> Numbers In Reverse Order <<<<<<<<<<<<<<<");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    getch();
    return 0;
}
// Main Function End
