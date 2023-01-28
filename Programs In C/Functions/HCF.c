// Write A Function to Calculate HCF of Two Numbers (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int HCF(int, int);

// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers => ");
    scanf("%d%d", &num1, &num2);
    printf("\nHCF of %d and %d => %d", num1, num2, HCF(num1, num2));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int HCF(int num1, int num2)
{
    // 1st Approach
    int min = num1 < num2 ? num1 : num2;
    int max = num1 > num2 ? num1 : num2;

    if (max % min == 0)
        return min;
    else
    {
        for (int i = min / 2; i; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
                return i;
        }
    }

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
    // return divisor;

    // 3rd Approach
    // int max = num1 > num2 ? num1 : num2;
    // int i;
    // for (i = max; i <= num1 * num2; i += max)
    // {
    //     if (i % num1 == 0 && i % num2 == 0)
    //         break;
    // }
    // return num1 * num2 / i;
}
