// Write A Function to Calculate Simple Interest (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
float simpleInterest(float, float, float);

// Main Function Start
int main()
{

    float principalAmount, rateOfInterest, time;
    printf("\nEnter Principal Amount,Rate of Interest and Time => ");
    scanf("%f%f%f", &principalAmount, &rateOfInterest, &time);
    printf("\nSimple Interest => %.2f", simpleInterest(principalAmount, rateOfInterest, time));

    getch();
    return 0;
}
// Main Function End

// Function Definition
float simpleInterest(float principalAmount, float rateOfInterest, float time)
{
    return principalAmount * rateOfInterest * time / 100;
}
