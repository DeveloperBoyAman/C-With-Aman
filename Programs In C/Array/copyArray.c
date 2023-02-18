
// C Program to Copy Elements of One Array into Another Array. Take Array Values From User

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int n;
    printf("\nHow Many Numbers => ");
    scanf("%d", &n);

    int numbers[n], copyNumbers[n];

    printf("\n>>>>>>>>>> Enter %d Numbers <<<<<<<<<<<\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    printf("\n\n>>>>>>>>>>>> Entered Array Elements <<<<<<<<<<<<\n");
    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
  
    // Copy Elements
    for (int i = 0; i < n; i++)
        copyNumbers[i] = numbers[i];

    printf("\n\n>>>>>>>>>>>> Copied Array Elements into Another Array <<<<<<<<<<<<\n");
    for (int i = 0; i < n; i++)
        printf("%d ", copyNumbers[i]);

    getch();
    return 0;
}
// Main Function End
