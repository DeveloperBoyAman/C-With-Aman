// C Program to Calculate Sum of Cubes of First N Natural Numbers

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
        sum += i * i * i;
    printf("\nSum of Cubes of First %d Natural Numbers =>  %d ", n, sum);

    getch();
    return 0;
}
// Main Function End
