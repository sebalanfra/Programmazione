#include<stdio.h>
#define N 5
int main(){

    int a[N] = {4,6,7,8,3}, n;

    printf("Inserisci un numero :\n");
    scanf("%d", &n);

    for(int i = 0;i < N;i++){
        if(a[i] == n){
            printf("TROVATO!\n");
            break;
        }
    }
}