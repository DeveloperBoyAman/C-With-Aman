// Write A Function to Calculate LCM of Two Numbers (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int LCM(int, int);

// Main Function Start
int main()
{

    int num1, num2;
    printf("\nEnter Two Numbers => ");
    scanf("%d%d", &num1, &num2);
    printf("\nLCM of %d and %d => %d", num1, num2, LCM(num1, num2));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int LCM(int num1, int num2)
{
    int max = num1 > num2 ? num1 : num2;

    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % num1 == 0 && i % num2 == 0)
            return i;
    }
}
