#include<stdio.h>
int main(){

    int pin = 0;

    do{
        printf("Inserisci un pin : \n");
        scanf("%d", &pin);
    }while(pin!= 44122);

    printf("Accessp Consentito :)\n");
}