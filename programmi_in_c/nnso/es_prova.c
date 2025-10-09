#include<stdio.h>
int main(){

    int x,y = 0;
    int somma = 0;

    printf("Inserisci due numeri: ");
    scanf("%d \n %d", &x, &y);
    somma = x*y;

    printf("Il prodotto  e\' : %d \n", somma);
}