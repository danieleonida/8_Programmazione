#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    printf("Inserisci il primo numero: ");
    scanf("%d",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d",&num2);
    printf("Inserisci il terzo numero: ");
    scanf("%d",&num3);

    if (num1>num2) {
        if(num1>num3){
            printf("Il primo numero(%d) e' il maggiore dei tre", num1);
        } else {
            printf("Il terzo numero(%d) e' il maggiore dei tre", num3);
        } 
    } else if(num2>num3) {
        printf("Il secondo numero(%d) e' il maggiore dei tre", num2);
    } else {
        printf("Il terzo numero(%d) e' il maggiore dei tre", num3);
    }
    
    return 0;
}