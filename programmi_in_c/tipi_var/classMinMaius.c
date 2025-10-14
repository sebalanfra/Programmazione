#include<stdio.h>
int main(){

    char a;

    scanf("%c", &a);

    if(a>= 65 && a<= 90){
        printf("Maiuscola\n");
    }
    else if(a>=87 && a<=122){
        printf("Minuscola\n");
    }
    else if(){
        printf("Numero\n");
    }
    else{
        printf("Cosa hai scritto bro?\n");
    }
}