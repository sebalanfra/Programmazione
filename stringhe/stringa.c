#include<stdio.h>
#define d 80
int main(){
    char a[d], b[d];

    printf("Inserisci la prima stringa:\n");
    scanf("%s", a);

   for(int i = 0; i !='\0';i++){
     b[i] = a[i];
   }
}