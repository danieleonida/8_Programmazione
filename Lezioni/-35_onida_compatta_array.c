#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    int array[30];
    int length = sizeof(array)/sizeof(array[0]);
    bool find = falso;
    for (int i = 0; i < length; i++) {
        array[i] = rand()%2;
        printf("%d ", array[i]);
    }
    
    for (int i = 0; i < length; i++) {
        if (array [i] == 0)
        {
            array[i] = array[i + 1];
        } else {
            /*
            for (int j = i +1; i < length; i++) {
                if(array[i] == array[j]) {
                    array [j] = 0;
                }
            }
            */
        } 
    }

    printf("\n");

    for (int i = 0; i < length; i++) {
        array[i] = rand()%2;
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
