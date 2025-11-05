#include<stdio.h>
#define N 10
int main(){

    int n, a[N];

    printf("Inserisci un numero : \n");
    scanf("%d", &n);
    printf("\n");

    printf("Stampa di array a partire da %d\n", n);

    for(int i = 0;i<N;i++){
        a[i] = n+1+i;
        printf("%d\n", a[i]); 
    }
}