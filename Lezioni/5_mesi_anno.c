#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month_num;
    int flag = 0;

    while(flag==0) {

        printf("Inserisci il numero del mese(da 1 a 12): ");
        scanf("%d",&month_num);
        
        if (month_num==1) {
            printf("Gennaio");
        }
        else if (month_num==2) {
            printf("Febbraio");
        }
        else if (month_num==3) {
            printf("Marzo");
        }
        else if (month_num==4) {
            printf("Aprile");
        }
        else if (month_num==5) {
            printf("Maggio");
        }
        else if (month_num==6) {
            printf("Giugno");
        }
        else if (month_num==7) {
            printf("Luglio");
        }
        else if (month_num==8) {
            printf("Agosto");
        }
        else if (month_num==9) {
            printf("Settembre");
        }
        else if (month_num==10) {
            printf("Ottobre");
        }
        else if (month_num==11) {
            printf("Novembre");
        }
        else if (month_num==12) {
            printf("Dicembre");
        }
        else {
            printf("Errore: il valore e' al di fuori del range");
        }
    }


    return 0;
}