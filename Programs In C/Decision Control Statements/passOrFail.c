// C Program to Take Marks of 5 Subjects and Assume Marks are Given Out of 100 and Passing Marks are 33. Now Check Whether Candidate Pass or Fail

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    float sub1, sub2, sub3, sub4, sub5;
    printf("\nEnter Marks of 5 Subjects => ");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    if (sub1 < 33 || sub2 < 33 || sub3 < 33 || sub4 < 33 || sub5 < 33)
        printf("Candidate Fail");
    else
        printf("Candidate Pass");

    getch();
    return 0;
}
// Main Function End
