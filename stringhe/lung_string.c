#include<stdio.h>
int main(){

    char s[81]; // Mettiamo 81 pk c'è lo '\0'
    int i;

    printf("Inserisci una stringa:\n");
    scanf("%s",s);

    for(i = 0; s[i]!='\0';i++);

    printf("La stringa è lunga %d\n", i);
}