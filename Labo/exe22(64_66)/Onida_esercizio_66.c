#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numIn = 0, pari = 0, dispari = 0;
    
    do {
        printf ("Inserisci un numero: ");
        scanf("%d",&numIn);
        (numIn%2==0) ? pari++ : dispari++;
        if (numIn == 0) pari--;
    } while (numIn != 0);

    printf("Hai inserito un totale di %d numeri;",pari+dispari);
    printf("\nPari: %d",pari);
    printf("\nDispari: %d",dispari);
    printf("\nla percentuale dei pari e' %d%%",100*pari/(pari+dispari));
    printf("\nDispari: %d%%",100*dispari/(pari+dispari));

    
    return 0;
}
