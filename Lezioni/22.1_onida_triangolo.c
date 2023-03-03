#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base;

    printf("base: ");
    scanf("%d", &base);

    for (int i=0; i<base; i++) {
        for (int j=0; j<base-i-1; j++) {
            printf(" ");           
        }       
        for (int j=0; j<i+1; j++) {
            printf("* ");           
        }  

        printf("\n");
    }
    
    return 0;
}