// C Program to Calculate LCM of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num1, num2, i;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);
    for (i = num1 > num2 ? num1 : num2; i <= num1 * num2; i += i)
        if (i % num1 == 0 && i % num2 == 0)
            break;
    printf("\nLCM of %d and %d => %d", num1, num2, i);

    getch();
    return 0;
}
// Main Function End
