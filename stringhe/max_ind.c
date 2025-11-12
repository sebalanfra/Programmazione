#include<stdio.h>
#define d 81
void copy(char *s2, char *s1){

    int i;

    for(i = 0;i!='\0'; i++){
        s2[i] = s1[i];
    }

    s2[i+1] = '\0';
}

int main(){

    char st[d], end[d];

    printf("Inserisci la prima strings : \n");
    scanf("%s", st);
    copy(end, st);

    printf("%s\n",end);

}