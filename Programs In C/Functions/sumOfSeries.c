// Write A Function to Find The Sum fo Series => 1!/1 + 2!/2 + 3!/3 +  4!/4 + 5!/5

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
float sumOfSeries();
long long int factorialOfN(int num);

// Main Function Start
int main()
{
    printf("\nSum of \" 1!/1 + 2!/2 + 3!/3 +  4!/4 + 5!/5 \" Series => %.2f", sumOfSeries());

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
float sumOfSeries()
{
    float sum = 0;
    for (int i = 1; i <= 5; i++)
        sum += factorialOfN(i) / i;
    return sum;
}

long long int factorialOfN(int num)
{
    long long int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}
