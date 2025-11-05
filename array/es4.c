#include<stdio.h>
#define d 5
int main(){

    int a[d] = {2,4,1,5,6}, b[d];

    for(int i = 0; i<d; i++){
        b[i] = a[i] * 2;
        printf("%d ", b[i]);

    }
    printf("\n");

}