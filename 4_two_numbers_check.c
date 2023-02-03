#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2;

    printf("Inserisci il primo numero: ");
    scanf("%d",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d",&num2);

    printf("\nOUTPUT:\n");
    if(num1%num2 == 0) 
        printf("Il primo numero(%d) e' multiplo del secondo(%d)", num1, num2);
    else
        printf("Il primo numero(%d) non e' multiplo del secondo(%d)", num1, num2);

    printf("\n");
    if(num2%2 == 0)
        printf("Il secondo numero(%d) e' un numero pari", num2);
    else
        printf("Il secondo numero(%d) e' un numero dispari", num2);
    
    if(num1<0)
        num1*=-1;
    if(num2<0)
        num2*=-1;
    printf("\n");
    printf("Il valore massimo assoluto tra il primo numero(%d) e il secondo(%d) e': %d", num1, num2, num1+num2);

    return 0;
}
