#include<stdio.h>
int main(){

    char a;

    scanf("%c", &a);

    if(a>= 65 && a<= 90)
        printf("Maiuscola\n");
    
    else if(a>=97 && a<=122)
        printf("Minuscola\n");
    
    else if(a>=48 && a<=57)
        printf("Numero\n");
    
    else
        printf("Cosa hai scritto bro?\n");
}