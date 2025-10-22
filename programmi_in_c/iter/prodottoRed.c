#include<stdio.h>
int main(){

    int p = 1, n;

    for(int i = 1;i<=5;i++){
        scanf("%d", &n);
        p= p*n;
    }

    printf("Il prodotto è : %d\n", p);
}