#include<stdio.h>

int main(){
    
    int a, m = 0;

    for(int i = 0;i < 5 ;i++){
        scanf("%d", &a);

        if(a > m){
            m = a;
        }   
    }

    printf("Massimo = %d\n", m);
}