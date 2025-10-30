#include<stdio.h>
/*
Cose da fare:
Funzione MCD che calcoli il massimo comune divisore di A e B
Richiedere M all'utente, che è il numero di righe composte da M valori
*/
int MCD(int n1, int n2){

    while(n1!=n2){
        if(n1 < n2){
            n2 = n2 - n1;
        }
        else{
            n1 = n1 - n2;
        }
    }
    return n1;
}
int main(){

    int M = 0;

    printf("Inserisci un numero : \n");
    scanf("%d", &M);

    for(int i = 1; i<=M; i++){
        for(int j = 1; j<= M;j++){

            int val = MCD(i,j);
            float num = 1/val;
            printf("%f     ", num);

        }
        printf("\n");
    }

    return 0;

}