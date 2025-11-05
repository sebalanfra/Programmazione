#include <stdio.h>
#define N 10

int main(){

    int a[N] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0;i <N;i++){
        a[i] = a[i] * a[i];
        printf("%d, " , a[i]);
    }
    printf("\n");
}