// C Program to Print Star Pattern

/*


*    
**   
* *  
*  * 
*****


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    /**************** 1st Approach *******************/
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    putch('\n');
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
            if (j == 1 || j == i || i == rows)
                printf("*");
            else
                printf(" ");
        putch('\n');
    }

    /**************** 2nd Approach *******************/
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // putch('\n');
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (j == 1 || j == i || i == rows)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     putch('\n');
    // }

    getch();
    return 0;
}
// Main Function End
