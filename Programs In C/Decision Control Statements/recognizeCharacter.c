// C Program to Check Whether A Character is an Alphabet(Uppercase),an Alphabet(Lowecase) , A Digit or a Special Character 

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    char ch;
    printf("\nEnter A Character => ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Entered Character is Uppercase Alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("Entered Character is Lowercase Alphabet");
    else if (ch >= '0' && ch >= '9')
        printf("Entered Character is Digit");
    else
        printf("Entered Character is Special Character");

    getch();
    return 0;
}
// Main Function End
