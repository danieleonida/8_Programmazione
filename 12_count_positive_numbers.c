#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int count = 0;

    while (num >= 0)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        count++;
    }
    
    printf("Numeri inseriti: %d \n", count);
    
    return 0;
}
