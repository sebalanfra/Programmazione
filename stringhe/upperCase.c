#include<stdio.h>
void toUpperCase(char *s){

    // +- 32 per trasformare tra MAIUSCOLE e/0 minuscole 
    for(int i = 0;i!='\0'; i++){
        if(s[i]>= 97 && s[i] <=122){ // oppure s[i] >= 'a' || s[i] <= 'z'
            s[i]-=32; // oppure s[i] -=('a'-'A');
        }
    }
}

int main(){

    char s[81];
    scanf("%s", s);
    toUpperCase(s);
    printf("%s", s);

}