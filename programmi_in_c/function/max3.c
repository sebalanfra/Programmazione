#include<stdio.h>
int maxNum(int a, int b){
    
    if(a>= b)
        return a;    
    else
        return b;
 
}
int max3(int a, int b, int c){
    
    int m1 = maxNum(a,b);
    int m2 = maxNum(m1,c);
    return m2;
 
}
int main(){

    int n1,n2, n3;
    int max;

    printf("Inserisci 3 numeri : \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    max = max3(n1,n2, n3);

    printf("Il max è : %d\n", max);
}