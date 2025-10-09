#include<stdio.h>
int main(){

    int a , s;
    
    s = 0; // Variabile di accumulatore

    scanf("%d", &a);
    s= s+a;

    scanf("%d", &a);
    s= s+a;

    scanf("%d", &a);
    s= s+a;

    printf("%d\n", s);
}