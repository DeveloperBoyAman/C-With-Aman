// C Program to Take Date as Given Format and Display in Given Format :-
// Input Format  => " DD/MM/YYYY " (18/10/2002)
// Output Format => " Day - DD , Month - MM ,Year - YYYY " (Day - 18 , Month - 10 ,Year - 2002)

// Header Files

#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int date,month,year;
    printf("\nEnter Date in this Format => DD/MM/YYYY\n");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("\nConverted Date In New Format => Day - %d , Month - %d , Year - %d",date,month,year);

    getch();
    return 0;
}
// Main Function End
