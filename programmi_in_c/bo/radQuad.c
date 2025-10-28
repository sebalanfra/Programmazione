#include<stdio.h>
int main(){

    float a;

    pintf("Inserisci un numero reale: \n");
    scanf("%f", &a);

    int x = 1;

    while(x*x!=a){
        x = (x+(a/x))/2;
    }

    printf("%d", x);
}