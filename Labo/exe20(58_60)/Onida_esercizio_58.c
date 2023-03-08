#include<stdio.h>

int main(void) {

    int i = 0;

    switch (i)
    {
    case 0: i++;
    case 1: for(;i<=5;++i);
    case 2: printf("%d",i);
    }

    return 0;
}