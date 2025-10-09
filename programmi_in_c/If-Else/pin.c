#include<stdio.h>
int main(){

    int pin = 0;

    printf("Inserisci una password: \n");
    scanf("%d", &pin);

    if(pin == 44122){
        printf("Accesso consentito\n");
    }
    else{
        printf("Ritenta la prossima volta :( \n");
    }
}

