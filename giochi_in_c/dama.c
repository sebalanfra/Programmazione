#include<stdio.h>
#include<stdlib.h>
// Definizione della Grandezza del Campo da giuoco
#define N 11
#define M 11

/* 
    I campi comuni sono da 64 caselle (8x8) quindi se faccio con una matrice :
    _
   | |
   vuol dire che per ogni i%2 == 0 ci va '-' e per ogni j%2 == 0 ci va '|'
*/
void crea(char matrice[N][M]){

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == N - 1) {
                if (j % 2 == 0) {
                    matrice[i][j] = '|';
                } else {
                    matrice[i][j] = ' ';
                }
            } else {
                if (j % 2 == 0) {
                    matrice[i][j] = '|';
                } else {
                    matrice[i][j] = ' ';
                }
            }
        }
    }
}
void stampa(char matrice[N][M]) { 

    system("clear"); 
    printf("         DAMA\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c", matrice[i][j]);
        }
        printf("\n");
    }
}
void gioco();
int main(){

    char mat[N][M];

    crea(mat);
    stampa(mat);
}


