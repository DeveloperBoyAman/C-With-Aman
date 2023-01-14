// C Program to Check Whether A Given Number is Prime Or Not

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num, i;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            break;
    }
    if (i > num / 2)
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    getch();
    return 0;
}
// Main Function End
