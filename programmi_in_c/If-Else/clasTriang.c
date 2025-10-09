#include<stdio.h>
int main(){
   
    int a,b,c;
    // stiamo facendo delle cagate :)
    printf("Dimmi la lunghezza dei lati di un triangolo: \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a!=b && b!=c && a!=c){
        printf("Scaleno");
    }
    else if(a == b &&  a == c ){ 
        printf("Equilatero");
    }
        else{
            printf("Isoscele");
        }
    }
