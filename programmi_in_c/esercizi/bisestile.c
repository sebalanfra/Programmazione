#include<stdio.h>
int main(){

    int a = 0;

    printf("Inserisci un anno : \n");
    scanf("%d", &a);

    if(a%4 == 0 && a%100!=0 || a%400 == 0 ){
        printf("Bisestile\n");
    }
    else{
        printf("NON Bisestile\n");
    }
}