#include<stdio.h>
int main(){

    int a,b,c;

    printf("Inserisci 3 numeri : \n");
    scanf("%d%d%d", &a, &b, &c);

    printf("\n\n");

    if(a >= b  && b>= c){
        printf("%d\n", a);
    }
    else if(b>= a && b>= c){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", c);
    }
}