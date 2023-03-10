#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 10

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int iPar[D], iDis[D], iUniti[2*D];

    printf("\n");
    for (int i = 0; i < D; i++) {
        iPar[i] = rand()%500+1;
        printf("iPar[%d] = %d; ",i,iPar[i]);
    }
    printf("\n\n");
    for (int i = 0; i < D; i++) {
        iDis[i] = rand()%500+1;
        printf("iDis[%d] = %d; ",i,iDis[i]);
    }
    printf("\n\n");

    for (int i = 0, j = 0, z = 0; z < sizeof(iUniti); i++, j++) {
        iUniti[z] = iPar[i];

    }
    
    
    return 0;
}
