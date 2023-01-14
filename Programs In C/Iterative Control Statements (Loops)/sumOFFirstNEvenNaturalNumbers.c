// C Program to Calculate Sum of First N Even Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int N, sum = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        sum += i * 2;
    printf("\nSum of First %d Even Natural Numbers =>  %d", N, sum);

    getch();
    return 0;
}
// Main Function End
