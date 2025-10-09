#include <stdio.h>
int main(){

    int n;

    printf("Inserisci un numero : \n");
    scanf("%d", &n);

    if(n < 0){
        n = n*(-1);
        printf("Il suo valore assoluto è %d\n", n);
    }else{
        printf("Il suo valore assoluto è %d\n", n);
    }
}