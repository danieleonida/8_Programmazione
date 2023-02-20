#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numIn;
    int flag = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &numIn);

    for (int i=2; i<numIn; i++) {

        if(numIn%i==0){
            printf("%d non è un numero primo\n", numIn);
            flag=1;
            break;
        }          
    }
    if(flag==0) {
        printf("%d è un numero primo\n", numIn);
    }

    return 0;
}