#include<stdio.h>
int main(){

    int a,b;

    printf("Inserisci due numeri : \n");
    scanf("%d%d", &a, &b);

    if(a >= b){
        printf("%d", &a);
    }
    else{
        printf("%d", &b);
    }
}