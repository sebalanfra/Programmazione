#include<stdio.h>
int main(){

    int divid, divis, q = 0;
    int m;

    scanf("%d%d", &divid, &divis);

    m = divid;

    while(m>=divis){
        m -= divis;
        q = q+1;
    }

    printf("Quoziente : %d\n", q);
    printf("Resto: %d\n", m);
    
}