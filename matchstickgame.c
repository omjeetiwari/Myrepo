#include<stdio.h>
#include<conio.h>
int main()
{
    int matchsticks = 21, uc, cc;
    while(matchsticks>=1)
    {
        printf("Total Match Sticks: %d\n", matchsticks);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &uc);

        if(uc>4)
        {
            printf("Invalid Entry");
            break;
        }

        
        cc = 5 - uc;
        
        printf("Computer picks up the %d match sticks.\n", cc);
        matchsticks = matchsticks-uc-cc;
        if(matchsticks==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
    return(0);
}
