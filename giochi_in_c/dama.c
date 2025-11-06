#include<stdio.h>
#include<stdlib.h>
// Definizione della Grandezza del Campo da giuoco
#define N 24

/* 
    I campi comuni sono da 64 caselle (8x8) quindi se faccio con una matrice :
    _
   | |
   vuol dire che per ogni i%2 == 0 ci va '-' e per ogni j%2 == 0 ci va '|'
*/
void crea(char matrice[N][N]);
void stampa(char matrice[N][N]) { 

    system("clear"); 
    printf("         DAMA\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c", matrice[i][j]);
        }
        printf("\n");
    }
}
void gioco();
int main(){

    char mat[N][N];

    crea(mat);
    stampa(mat);
}


