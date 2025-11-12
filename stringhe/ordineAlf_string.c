#include<stdio.h>
#define d

int compare(char *s1,char *s2){

    int i = 0;
    
    while(s1[i] == s2[i]){
        i++;
    }

    return(s1[i] - s2[i]);
}
int main(){

    char a[81], b[81];

    printf("Inserisci due parole : \n");
    scanf("%s%s", a, b);

    int ris = compare(a,b);

    if(ris <0){
        printf("%s precede %s", a, b);
    }
    else if( ris == 0)
        printf("%s e %s sono identiche", a, b);
    else   
        printf("%s precede %s", b, a);
}