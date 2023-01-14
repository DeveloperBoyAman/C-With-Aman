// C Program to Take Three Digit Number And Rotate its Digits by 1 towards Right 

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Three Digit Number => ");
    scanf("%d", &num);
    num = num % 10 * 100 + num / 10;
    printf("\nNumber After Rotating 1 Digit towards Right =>  %d", num);

    getch();
    return 0;
}
// Main Function End
