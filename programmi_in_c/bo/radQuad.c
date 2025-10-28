#include<stdio.h>
int main(){

    float a;

    printf("Inserisci un numero reale: \n");
    scanf("%f", &a);

    float x = 1;

    while(x*x!=a){
        x = (x+(a/x))/2;
    }

    printf("%f", x);
}