#include<stdio.h>
/*
Vuole sapere se sappiamo utilizzare il debugger
vuole che verifichiamo 
*/
int main(void){

    int i = 0;

    while(i<1000000){
        i += i % 4 ? 3 : 5;
        return 0;
    }

}