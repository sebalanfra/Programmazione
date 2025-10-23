#include<stdio.h>
int main(){

    int n,m, s = 0;

    printf("Inserisci un numero : \n ");
    scanf("%d", &m);

    printf("quante vole vuoi moltiplicare questo numero?\n");
    scanf("%d", &n);

    for(int i = 0;    ; i++){
        s+=m;
    }

    printf("La somma di %d fatta %d volte è : %d\n", m, n,s);
}