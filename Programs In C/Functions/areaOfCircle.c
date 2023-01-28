// Write A Function to Calculate Area of Circle (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
float areaOfCircle(float);

// Main Function Start
int main()
{

    float radius;
    printf("\nEnter Radius of Circle => ");
    scanf("%f", &radius);
    printf("\nArea of Circle Having Radius %.2f => %.2f", radius, areaOfCircle(radius));

    getch();
    return 0;
}
// Main Function End

// Function Definition
float areaOfCircle(float radius)
{
    return 22.0 / 7 * radius * radius;
}
