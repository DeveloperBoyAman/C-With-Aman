// C Program to Calculate Sum of First N Odd Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int n, sum = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i * 2 - 1;
    printf("\nSum of First %d Odd Natural Numbers =>  %d ", n, sum);

    getch();
    return 0;
}
// Main Function End
