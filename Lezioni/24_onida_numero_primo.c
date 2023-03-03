#include <stdio.h>
#include <time.h>
#include <math.h>


int main()
{
    int numIn;
    int flag = 0;
    double time_spent = 0.0;

    printf("Inserisci un numero: ");
    scanf("%d", &numIn);

    clock_t begin = clock();

    if(numIn == 0 || numIn == 1)
        flag = 1;

    for (int i=2; i <= sqrt(numIn); ++i) {
        if(numIn%i==0) {
            flag=1;
            break;
        }          
    }

    if(flag==0) {
        printf("%d è un numero primo\n", numIn);
    } else {
        printf("%d non è un numero primo\n", numIn);
    }


    clock_t end = clock();

    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);

    return 0;
}

//2147483647