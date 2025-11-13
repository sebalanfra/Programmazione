#include<stdio.h>
int content(char *a, char *b){
    // Andiamo a vedere se A è contenuta in B
    // A = zio B = lezione
    int i,j = 0;

    for(i = 0;b[i]!='\0'; i++){
        if(b[i] == a[j]){
            j++;
            if(a[j] == '\0'){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    char s1[81]; char s2[81];

    printf("Inserisci due parole :\n");
    scanf("%s%s", s1,s2);

    if(content(s1,s2)){
        printf("CONTENUTA\n");
    }
    else{
        printf("NON CONTENUTA");
    }

    
}