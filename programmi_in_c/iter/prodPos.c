#include<stdio.h>
int main(){

    int p = 1, n;

    for(int i = 0; i < 5; i++){
        scanf("%d", &n);
        if(n > 0){
            p *=n;
        }
    }

    printf("Il prodotto è: %d\n", p);
}