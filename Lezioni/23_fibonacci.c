#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numEle;
    int num0=0, num1=1, num2;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &numEle);
    
    printf("\n%d %d",num0,num1);
    for (int i=2; i<numEle; ++i) {
        num2=num0+num1;    
        printf(" %d",num2);    
        num0=num1;    
        num1=num2;   
    }
    printf("\n");
    return 0;
}