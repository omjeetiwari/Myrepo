#include<stdio.h>

int main() {
    int a , b=0 , space , rows;

    printf("enter number of rows : ");
    scanf("%d\n",&rows);

    for(a = 1; a <= rows; a++ );
    {
        for(space = 1; space <= rows - a; space++ ) {
            printf(" ");

        }
        while (b != 2 * a - 1) {
       printf("* ");
        }
    }


}