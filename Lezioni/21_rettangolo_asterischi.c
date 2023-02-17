#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base,altezza;

    printf("base: ");
    scanf("%d", &base);
    printf("altezza: ");
    scanf("%d", &altezza);


    for (int i=0; i<base; i++) {
        printf("* ");
    }
    printf("\n");
    for (int i=0; i<altezza-2; i++) {
        printf("* ");

        for (int j=0; j<base-2; j++) {
            printf("  ");           
        }       
        printf("*\n");
    }

    for (int i = 0; i < base; i++) {
        printf("* ");
    }
    printf("\n");
    
    return 0;
}