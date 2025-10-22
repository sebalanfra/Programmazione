#include<stdio.h>
int main(){

    int pin = 0;
    int cnt = 0;

    do{
        printf("Inserisci un pin : \n");
        scanf("%d", &pin);
        cnt++;
    }while(pin!= 44122 && cnt < 3);

    if(cnt != 3)
        printf("Accesso Consntito :)\n");
    else
        printf("Accesso Negato :( \n");
}