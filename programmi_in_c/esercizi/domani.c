#include<stdio.h>
int main(){

    int g,m,a;
    int tmp; 

    printf("Inserisci un giorno: ");
    scanf("%d", &g);

    printf("Inserisci un mese dell' anno :");
    scanf("%d", &m);
    
    printf("Inserisci un anno :");
    scanf("%d", &a);

    if(a%4 == 0 && a%100!=0 || a%400 == 0 ){
        if(m == 2){
            tmp = 29;
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7|| m == 8 || m ==10 || m == 12){
            tmp =31;
        }
        else{
            tmp = 30;
        }
    }
    else{
        if(m == 2){
            tmp = 28;
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7|| m == 8 || m ==10 || m == 12){
            tmp = 31;
        }
        else{
            tmp =30;
        }
    }

    if(m == 12 && g == 31){
        printf("%d-%d-%d\n", g,m,a+1);
    }
    else if( g == tmp){
        printf("%d-%d-%d\n", 1, m+1, a);
    }
    else{
        printf("%d-%d-%d\n", g+1,m,a);
    }
}

