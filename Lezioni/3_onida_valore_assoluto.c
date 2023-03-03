#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;

    printf("Inserisci un numero: ");
    scanf("%d",&num);

    if(num<0) num=-num;

    printf("Il valore assoluto e' %d", num);
    
    return 0;
}
