// C Program to Input Three digits Number and Display Sum of The Digits Withouy Loop

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num, sum;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    // 1st Way
    sum = num % 10;
    sum += num % 100 / 10;
    sum += num / 100;

    // 2st Way
    // sum = num % 10;
    // num /= 10;
    // sum += num % 10;
    // num /= 10;
    // sum += num;

    printf("\nSum of Digits of Entered Number (%d) => %d", num, sum);

    getch();
    return 0;
}
// Main Function End
