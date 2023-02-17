#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}