// C Program to Calculate LCM of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);

    // 1st Approach
    int max = num1 > num2 ? num1 : num2, i;
    for (i = max; i <= num1 * num2; i += max)
    {
        if (i % num1 == 0 && i % num2 == 0)
            break;
    }
    printf("\nLCM of %d and %d => %d", num1, num2, i);

    // 2nd Approach (Using HCF)
    // int divisor = num1 < num2 ? num1 : num2;
    // int dividend = num1 > num2 ? num1 : num2;
    // int remainder = dividend % divisor;
    // while (remainder)
    // {
    //     dividend = divisor;
    //     divisor = remainder;
    //     remainder = dividend % divisor;
    // }
    // printf("\nLCM of %d and %d => %d", num1, num2, num1 * num2 / divisor);
    
    
    getch();
    return 0;
}
// Main Function End
