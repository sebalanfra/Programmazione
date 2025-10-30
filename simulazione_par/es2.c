#include<stdio.h>
/*
Vuole sapere se sappiamo utilizzare il debugger
vuole che verifichiamo quale è il primo valore da aggiungere con i = 44122
RISPOSTA:
Essendo 44122 non divisibile per 4 aggiunge ad i 3 facendolo diventare 44125
*/
int main(void){

    int i = 0;

    while(i<1000000){
        i += i % 4 ? 3 : 5;
        return 0;
    }

}