// C Program to Check whether A Given Alphabet is in Uppercase or Lowercase

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    char ch;
    printf("\nEnter An Alphabet => ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Entered Alphabet is in Uppercase");
    else
        printf("Entered Alphabet is in Lowercase");

    getch();
    return 0;
}
// Main Function End
