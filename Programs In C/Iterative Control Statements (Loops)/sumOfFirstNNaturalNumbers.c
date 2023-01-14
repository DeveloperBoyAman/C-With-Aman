// C Program to Calculate Sum of First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int n, sum = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &n);
    printf("\nSum of First %d Natural Numbers => ", n);
    while (n)
        sum += n--;
    printf("%d", sum);

    getch();
    return 0;
}
// Main Function End
