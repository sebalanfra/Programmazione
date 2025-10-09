
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//Definizione delle dimensioni della matrice di gioco :) 
#define N 6
#define M 21

void checkWin(char matrice[N][M]){

    // VERTICALE

    // ORRIZZONTALE

    //OBLIQUO 1 \*

    // OBLIQUO 2 /

    
}

void crea(char matrice[N][M]) {

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
    printf("         FORZA 4\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c", matrice[i][j]);
        }
        printf("\n");
    }
}

void gioco( char matrice[N][M]){

    static int cnt =0;
    static char p;
    int c, r, i=0;

    if(cnt>= 7){
        //checkWin(matrice);
    }

    if(cnt%2 == 0){
        p = 'O';
    }
    else{
        p = 'X';
    }

    printf("Giocatore dove vuoi inserire la pedina ?\n");

    do { 
        printf(" Dimmi la Colonne dove vuoi inserire il gettone(1,3,5,7,9,11,13,15,17,19): ");
        scanf("%d", &c);  
    }  while (c % 2 == 0 || c > 20|| c < 0);

    for(int i = N; i > 0; i--) {
        if (matrice[i][c] == ' ') {  
                matrice[i][c] = p;       
                break;                   
        }
        if (i == 1) {  
            printf("Non puoi più inserire gettoni qui, devi cambiare colonna\n");
        }
    }
    
    cnt ++;
  
    stampa(matrice);
    gioco(matrice);
}

int main(){

    char matrice[N][M];

    crea(matrice);
    stampa(matrice);
    gioco(matrice);
}