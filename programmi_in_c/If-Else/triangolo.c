#include<stdio.h>
int main(){

    int a,b,c;

    printf("Dimmi la lunghezza dei lati di un triangolo: \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a*a + b*b == c*c){
        printf("E' Rettangolo");
    }
    else{
        printf("Non Rettangolo :(");
    }
}