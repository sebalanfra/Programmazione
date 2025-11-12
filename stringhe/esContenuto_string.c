#include<stdio.h>
int content(char *a, char *b){
    // Andiamo a vedere se A è contenuta in B
    // A = zio B = lezione
    int i,j = 0;

    for(i = 0;b[i]!='\0'; i++){
        for(j = 0;a[j]!='\0'; j++){
            if(a[j] != b[i]){
               break;
            }   
        }
        if(a[j] != b[i]){
            break;
        }
        else{
            return 1;
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