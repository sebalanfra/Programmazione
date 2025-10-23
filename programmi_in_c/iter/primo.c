#include<stdio.h>
int  primo(int num){

    if(num %2 == 1 || num == 2)
        return 1;
    else    
        return 0;
}
int main(){

    int n;

    printf("Inserisci un numero :\n");
    scanf("%d", &n);

    if(primo(n) ){
        printf("Il numero è primo.\n");
    }
    else{
        printf("Il numero non è primo\n");
    }
}