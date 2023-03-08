#include<stdio.h>

int main(void) {

    int userIn = 0;

    do
    {
        printf("Inserire un numero compreso tra 1 e 10: ");
        scanf("%d", &userIn);
    } while (userIn < 1 || userIn > 10);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d",userIn, i, userIn*i);
    }
    

}