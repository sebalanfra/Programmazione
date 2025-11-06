#include<stdio.h>
#define dim 5
int main(){

    int p = 1;
    int a[dim];

    for(int i = 0;i< dim ;i++){
        printf("Inserisci un numero : \n");
        scanf("%d", &a[i]);
        p = p*a[i];
    }

    printf("Il prodotto dei nueri inseriti prima è: %d\n", p);
    
}