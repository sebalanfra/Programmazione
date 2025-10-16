#include<stdio.h>
int valAssoluto(int n){

    if(n<0){
        n = n*(-1);
    }
    return n;
}
int main(){


    int num;

    printf("Inserisci un numero:\n");
    scanf("%d", &num);

    num = valAssoluto(num);

    printf("Il valore assouluto è : %d\n", num);
}