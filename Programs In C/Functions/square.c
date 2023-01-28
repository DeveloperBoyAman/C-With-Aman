// Write A Function to Find Square of A Number (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int square(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nSquare of %d => %d", num, square(num));

    getch();
    return 0;
}
// Main Function End

// Functions Definition
int square(int num)
{
    return num * num;
}
