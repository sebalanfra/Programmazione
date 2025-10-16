#include<stdio.h>
int maxNum(int a, int b){
    
    if(a>= b)
        return a;    
    else
        return b;
 
}
int main(){

    int n1,n2;
    int max;

    printf("Inserisci 2 numeri : \n");
    scanf("%d%d", &n1, &n2);

    max = maxNum(n1,n2);

    printf("Il max è : %d\n", max);
}