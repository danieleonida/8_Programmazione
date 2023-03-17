#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char parola1[20];
    char parola2[20];
    char copia[20];
    int lunghezza1 = 0;
    int lunghezza2 = 0;
    int i,j;
    bool isAnagramma = true;

    printf("Inserisci la prima parola: ");
    scanf("%s", parola1);
    lunghezza1 = strlen(parola1);

    printf("Inserisci la seconda parola: ");
    scanf("%s", parola2);
    lunghezza2 = strlen(parola2);

    strcpy(copia,parola2);
    //strcpy(parola2,copia);
    printf("%s e %s\n",copia,parola2);

    if (lunghezza1 != lunghezza2)
    {
        isAnagramma = false;
    }
    
    for (i = 0; i < lunghezza1 && isAnagramma == true; i++)
    {

        for (j = 0; j < lunghezza2 && parola1[i] != copia[j]; j++);
        if (j == lunghezza2)
        {
            isAnagramma = false; 
        } else {
            copia[j] = ' '; 
        }
    }

    if (isAnagramma == true)
    {
        printf("%s e %s sono un anagramma",parola1,parola2);
    } else {
        printf("%s e %s non sono un anagramma",parola1,parola2);
    }
    
    
    return 0;
}
