#include<stdio.h>
#include<string.h>
int main(){

    // Implementazione della String.h e di tutte le sue funzioni di Libreria :)
    char s[] = {"Ferrara"};
    char s2[81];

    /* Funzione che serve per copiare una stringa in un alatra e va scritta:
       strcpy(stringa_destinazione, stringa_da_copiare)*/
    strcpy(s2,s);
    
    /* Funzione che serve a concatenare una stringa a una gia esistente, e sci scrive: 
       strcat(stringa_concatenata_finale, stringa_da concatenare)*/
    strcat(s2, "2025");

    /* Funzione che serve a calcolare la lungezza di una singola stringa, e si scrive: 
      strlen(stringa_da_vedere_la_lunghezza)*/
   strlen(s2);

   /* Funzione che serve a comparare due stringhe per ottenere  un valore che indica
    se la prima stringa è minore, uguale o maggiore della seconda , e si scrive:
      strcmp(stringa1, stringa2)*/
   strcmp(s, s2);
}