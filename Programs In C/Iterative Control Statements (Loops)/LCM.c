// C Program to Calculate LCM of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num1, num2, i,max;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);
    max = num1 > num2 ? num1 : num2;
    for (i = max ; i <= num1 * num2; i += max)
        if (i % num1 == 0 && i % num2 == 0)
            break;
    printf("\nLCM of %d and %d => %d", num1, num2, i);

    getch();
    return 0;
}
// Main Function End
