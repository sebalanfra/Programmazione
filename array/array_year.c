#include<stdio.h>
#define in 1900 
#define fi 2100
int bisestile(int a){

    return ((a%400 == 0 || a%4 == 0 )&&  a%100 !=0);
}
int main(){

    int a [fi - in +1], b[fi - in +1];
    int dl = 0;

    for(int i = 0;i<= fi - in +1; i++){
        a[i] = i + in;
        if(bisestile(a[i])){
            b[dl] = a[i];
            dl++;
        }
    }
    for(int  j = 0; j<dl; j++){
        printf("%d,", b[j]);
    }
    printf("\n");
}