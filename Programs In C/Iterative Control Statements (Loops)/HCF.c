// C Program to Calculate HCF of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers to Find HCF => ");
    scanf("%d%d", &num1, &num2);

    // 1st Approach
    int min = num1 < num2 ? num1 : num2;
    int max = num1 > num2 ? num1 : num2;
    int i;
    if (max % min == 0)
        return min;
    else
    {
        for (i = min / 2; i; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
                return i;
        }
    }
    printf("\nHCF of %d and %d => %d", num1, num2, i);

    // 2nd Approach
    // int divisor = num1 < num2 ? num1 : num2;
    // int dividend = num1 > num2 ? num1 : num2;
    // int remainder = dividend % divisor;
    // while (remainder)
    // {
    //     dividend = divisor;
    //     divisor = remainder;
    //     remainder = dividend % divisor;
    // }
    //  printf("HCF of %d and %d => %d", num1, num2, divisor);

    // 3rd Approach
    // int max = num1 > num2 ? num1 : num2;
    // int i;
    // for (i = max; i <= num1 * num2; i += max)
    // {
    //     if (i % num1 == 0 && i % num2 == 0)
    //         break;
    // }
    // printf("HCF of %d and %d => %d", num1, num2, num1 * num2 / i);

    getch();
    return 0;
}
// Main Function End
