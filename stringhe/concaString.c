#include<stdio.h>
void concat(char *d, char *s1, char *s2){

    int i,j;

    for(i = 0;s1[i]!='\0'; i++){
        d[i] = s1[i];
    }

    for(j = 0 ;s2[j]!='\0'; j++){
        d[i] = s2[j];
        i++;
    }
    
    d[i+1] = '\0';
}
int main(){

    char a[81] , b[81];

    printf("Inserisci due parole : \n");
    scanf("%s %s", a, b);

    char c[81];

    concat(c,a,b);

    printf("%s\n", c);
}