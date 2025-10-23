#include<stdio.h>
int main(){

    int s = 0, n=0;

    for(int i = 0; i<5; i++){
        scanf("%d", &n);
        s+=n;
        //n = 0;
    }
    printf("La somma è: %d\n", s);
}