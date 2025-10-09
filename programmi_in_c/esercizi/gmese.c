#include<stdio.h>
int main(){

    int a, m;

    printf("Inserisci un mese dell' anno : \n");
    scanf("%d", &m);
    
    printf("Inserisci un anno : \n");
    scanf("%d", &a);

    if(a%4 == 0 && a%100!=0 || a%400 == 0 ){
        if(m == 2){
            printf("29\n");
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7|| m == 8 || m ==10 || m == 12){
            printf("31\n");
        }
        else{
            printf("30\n");
        }
    }
    else{
        if(m == 2){
            printf("28\n");
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7|| m == 8 || m ==10 || m == 12){
            printf("31\n");
        }
        else{
            printf("30\n");
        }
    }
}