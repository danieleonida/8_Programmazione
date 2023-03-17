#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    int array[1000];
    const int length = sizeof(array)/sizeof(array[0]);
    bool flag = false;

    printf("\n");
    array[0] = 2;
    for (int i = 3, quanti = 1;quanti<length; i+=2) {

        flag = false;
        for (int j = 0; j < quanti; j++) {

            if(i%array[j] == 0) {
                flag = true;
                break;
            } 
        }
        if(flag == false) {
            printf("%d\n",i);
            array[quanti] = i;
            quanti++;
        }
    }

    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
