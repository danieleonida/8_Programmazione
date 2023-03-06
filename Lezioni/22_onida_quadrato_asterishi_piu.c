#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lato;

    printf("Lato: ");
    scanf("%d", &lato);

    for (int i=0; i<lato; i++) {
        for (int j=0; j<i+1; j++) {
            printf("* ");           
        }   
        for (int j=lato-1; j>i; j--) {
            printf("+ ");           
        }       
        printf("\n");
    }
    
    return 0;
}
