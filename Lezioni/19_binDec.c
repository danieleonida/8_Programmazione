#include <stdio.h>

int main(int argc, char const *argv[])
{
    char num_type;
    int bin,dec,pow = 1;
    int result = 0;

    printf("Inserire 'b' se si vuole passare da binario a decimale,\n 'd' se si vuole passare da decimale a binario: ");
    scanf("%c", &num_type);
    if (num_type != 'd' && num_type != 'b') {
        printf("\n Errore valore inserito non corretto \n");
    }

    if (num_type == 'b') {

        printf("Inserisci un numero: ");
        scanf("%d", &bin);
        
        while (bin == 0 || bin == 1) {
            
            if (bin == 1)
                result += pow;

            pow *= 2;

            printf("Conversione in decimale = %d \n", result);     
            
            printf("Inserisci un numero: ");
            scanf("%d", &bin);

        }

    }

    if (num_type == 'd') {

        printf("Inserisci un numero: ");
        scanf("%d", &dec);

        for (int i = 1; dec > 0; i*=10) {
            if(dec%2==1)
                result += i;
            dec /= 2;
        }

        printf("Conversione in binario = %d \n", result);     
    }
    
    return 0;
}