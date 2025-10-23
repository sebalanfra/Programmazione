#include<stdio.h>
int main(){

    int N, s =0;

    printf("Inserisci un numero : \n");
    scanf("%d", &N);

    for(int i = 0; i<=N; i++){
        s+=i;
    }

    printf("%d", s);
}