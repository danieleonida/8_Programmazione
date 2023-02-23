#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numNumber, number;
    int sum=0;

    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &numNumber);

    for (int i = 0; i < numNumber; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &number);
        sum=sum+number;
    
    }

    printf("La somma dei numeri inseriti e': %d \n", sum);
    return 0;
}
