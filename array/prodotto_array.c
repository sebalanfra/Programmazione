#include<stdio.h>
#define dim 5
int main(){

    int p = 1;
    int a[dim];

    for(int i = 0;i< dim ;i++){
        printf("Inserisci un numero : \n");
        scanf("%d", &a[i]);
        p = p*a[i];
    }

    for(int i = 0;i < dim; i++){
        printf("%d", a[i]);
        if(i < dim -1){
            printf(" x ");
        }
    }

    printf("= %d\n", p);

    
    
}