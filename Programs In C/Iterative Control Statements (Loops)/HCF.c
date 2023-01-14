// C Program to Calculate HCF of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    // 1st Way
    int num1, num2, i, small, large;
    printf("\nEnter Two Numbers to Find HCF => ");
    scanf("%d%d", &num1, &num2);
    small = num1 < num2 ? num1 : num2;
    large = num1 > num2 ? num1 : num2;
    if (large % small == 0)
        i = small;
    else
    {
        i = small / 2;
        while (i)
        {
            if (num1 % i == 0 && num2 % i == 0)
                break;
            i--;
        }
    }
    printf("HCF of %d and %d => %d", num1, num2, i);

    // 2nd Way
    //  int num1, num2, i, divisor, dividend, remainder;
    //  printf("\nEnter Two Numbers to Find HCF => ");
    //  scanf("%d%d", &num1, &num2);
    //  divisor = num1 < num2 ? num1 : num2;
    //  dividend = num1 > num2 ? num1 : num2;
    //  remainder = dividend % divisor;
    //  while (remainder)
    //  {
    //      dividend = divisor;
    //      divisor = remainder;
    //      remainder = dividend % divisor;
    //  }
    //  printf("HCF of %d and %d => %d", num1, num2, divisor);

    // 3rd Way
    // int num1, num2, i;
    // printf("\nEnter Two Numbers to Find HCF => ");
    // scanf("%d%d", &num1, &num2);
    // int max = num1 > num2 ? num1 : num2;
    // for (i = max; i <= num1 * num2; i += max)
    //     if (i % num1 == 0 && i % num2 == 0)
    //         break;
    // printf("HCF of %d and %d => %d", num1, num2, num1 * num2 / i);

    getch();
    return 0;
}
// Main Function End
