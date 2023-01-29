
// Write A Recursive Function to Calculate HCF of Two Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int HCF(int, int);

// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers to Find HCF => ");
    scanf("%d%d", &num1, &num2);
    printf("\nHCF of %d and %d => %d", num1, num2, HCF(num1 > num2 ? num1 : num2, num1 < num2 ? num1 : num2));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int HCF(int num1, int num2)
{
    if (num1 % num2 == 0)
        return num2;
    HCF(num2, num1 % num2);
}
