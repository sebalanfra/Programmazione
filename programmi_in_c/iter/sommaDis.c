#include<stdio.h>
int main(){

    int N, s = 0;

    printf("Inserisci un numero : \n");
    scanf("%d", &N);

    for(int i = 0; i<=N; i++){
        if(i%2 == 1){
        s+=i;
        }
    }

    printf("%d", s);
}