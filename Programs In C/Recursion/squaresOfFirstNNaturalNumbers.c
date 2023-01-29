
//  Write A Recursive Function to Print Squares of First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void squareOfNNaturalNumbers(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many Numbers => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>> Squares of First %d Natural Numbers Are <<<<<<<<<<<<<\n", n);
    squareOfNNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void squareOfNNaturalNumbers(int n)
{
    if (n > 0)
    {
        squareOfNNaturalNumbers(n - 1);
        printf("%d ", n * n);
    }
}
