#include<stdio.h>
int bisestile(int a){

    // Ritorna 1 se è bisestile 0 se nn lo è 
    if(a%4 == 0 && a%100!=0 || a%400 == 0 ){
        return 1;
    }
     else{
        return 0;
    }
}
int giorniMese(int m, int a){

    int gm;

    if(m == 4 || m == 6 || m== 9 || m == 11 ){
        gm = 30;
    }
    else if(m == 2){
        if(bisestile(a)){
            gm = 29;
        }
        else{
            gm =28;
        }
    }
    else{
        gm = 31;
    }

}
int valida(int g, int m, int a){

    if(m < 1 || m > 12){
        return 0;
    }
    if(g <1 || g > giorniMese(m,a)){
        return 0;
    }

    return 1;
}
int main(){

    int g,m,a;
    int gm; 

    printf("Inserisci un giorno: ");
    scanf("%d", &g);

    printf("Inserisci un mese dell' anno :");
    scanf("%d", &m);
    
    printf("Inserisci un anno :");
    scanf("%d", &a);

    if(!valida(g,m,a)){
        printf("Data nn valida");
        return -1;
    }


    if (g == 31 && m == 12)
        printf("%d %d %d\n", 1, 1, a + 1);
    else if (g == gm)  // ultimo giorno del mese
        printf("%d %d %d\n", 1, m + 1, a);
    else
        printf("%d %d %d\n", g + 1, m, a);

}