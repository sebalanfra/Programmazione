#include <stdio.h>
int main(){

    int g=0;

    printf("Inserisci un numero : \n");
    scanf("%d", &g);

    switch(g){
        case 1 : 
            printf("Lunedi");
            break;
        case 2 : 
            printf("Martedi");
            break;
        case 3 : 
            printf("Mercoledi");
            break;
        case 4 : 
            printf("Giovedi");
            break;
        case 5 : 
            printf("Venerdi");
            break;
        case 6 : 
            printf("Sabato");
            break;
        case 7 : 
            printf("Domenica");
            break;
    }    
      printf("\n");  
}