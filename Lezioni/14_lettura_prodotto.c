#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int sum=0;
    long long int prod=1;

    do
    {
        printf("Inserisci un numero: ");
        scanf("%d", &num);

        sum=sum+num;
        prod=prod*num;

    } while (sum<=1000);
    
    printf("La somma e': %d \n", sum);
    printf("Il prodotto e': %lld \n", prod);
    return 0;
}
