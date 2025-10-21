#include<stdio.h>
int main(){

    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    /*
        *pa = *pb assegno un valore
         pa =  pb assegno un indirizzo
    */

    pa = pb;

    printf("%d%d\n",*pa,*pb);

    *pa = 3;

    printf("%d%d\n",*pa, *pb);

}