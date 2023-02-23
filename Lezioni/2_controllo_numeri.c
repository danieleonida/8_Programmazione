#include <stdio.h>n

int main(int argc, char const *argv[])
{
    int num = 0;

    printf("Inserisci un numero: ");
    scanf("%d",&num);

    if (num>=0) printf("Il numero inserito e' maggiore o uguale 0");
    else printf("Il numero inserito e' minore di 0");
    
    return 0;
}
