// C Program to Find Area of Circle

// Header Files

#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float radius, area;
    printf("\nEnter Radius of Circle => ");
    scanf("%f", &radius);
    area = 22 / 7.0 * radius * radius;
    printf("\nArea of Circle is %.2f having the Radius %.2f", area, radius);

    getch();
    return 0;
}
// Main Function End
