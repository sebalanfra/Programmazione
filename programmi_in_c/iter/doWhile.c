#include<stdio.h>
int main(){

    int pin = 0;

    do{
        printf("Inserisci un pin : \n");
        scANF("%d", &pin);
    }while(pin!= 44122);

    printf("Accessp Consentito :)\n");
}