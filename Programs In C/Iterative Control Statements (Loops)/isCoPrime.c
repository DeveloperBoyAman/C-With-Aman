// C Program to Check Whether Two Given Numbers are Co-Prime or Not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int num1, num2, i;
    printf("\nEnter Two Numbers to Check Co-Prime or Not => ");
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
    if (i == 1)
        printf("%d and %d Are Co-Prime Numbers", num1, num2);
    else
        printf("%d and %d Are Not Co-Prime Numbers", num1, num2);

    // 2nd Way
    // int num1, num2, divisor, dividend, remainder;
    // printf("\nEnter Two Numbers to Find HCF => ");
    // scanf("%d%d", &num1, &num2);
    // divisor = num1 < num2 ? num1 : num2;
    // dividend = num1 > num2 ? num1 : num2;
    // remainder = dividend % divisor;
    // while (remainder)
    // {
    //     dividend = divisor;
    //     divisor = remainder;
    //     remainder = dividend % divisor;
    // }
    // if (divisor == 1)
    //     printf("%d and %d Are Co-Prime Numbers", num1, num2);
    // else
    //     printf("%d and %d Are Not Co-Prime Numbers", num1, num2);

    
    // 3rd Way
    // int num1, num2, i;
    // printf("\nEnter Two Numbers to Find HCF => ");
    // scanf("%d%d", &num1, &num2);
    // int max = num1 > num2 ? num1 : num2;
    // for (i = max; i <= num1 * num2; i += max){
    //     if (i % num1 == 0 && i % num2 == 0)
    //         break;
    // }
    // if (num1 * num2 / i == 1)
    //     printf("%d and %d Are Co-Prime Numbers", num1, num2);
    // else
    //     printf("%d and %d Are Not Co-Prime Numbers", num1, num2);

    
    getch();
    return 0;
}
// Main Function End
