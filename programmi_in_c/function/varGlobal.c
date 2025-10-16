#include<stdio.h>

int a;

void incremento(){

    a++;
}

int main(){
     a = 1;
     printf("%d\n",a);
     incremento();
     printf("%d\n", a);
     return 0;
}