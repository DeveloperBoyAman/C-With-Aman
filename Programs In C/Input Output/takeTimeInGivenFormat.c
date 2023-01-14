// C Program to Take Time as Given Format and Display in Given Format :-
// Input Format  => "HH:MM"
// Output Format => "HH Hour MM Minute"

// Header Files

#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int hour, minute;
    printf("\nEnter Time in this Format => HH:MM\n");
    scanf("%d:%d", &hour, &minute);
    printf("\nConverted Time In New Format => %d Hour and %d Minutes", hour, minute);

    getch();
    return 0;
}
// Main Function End
