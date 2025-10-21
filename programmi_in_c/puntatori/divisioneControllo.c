#include<stdio.h>
void divisione(int n1, int n2, int *pq, int *pr){

    *pq = n1/n2; // Quoziente

    *pr = n1%n2; // Resto
}
int main(){

    int a = 22, b = 7;
    int  q , r;
    if(b == 0)
    divisione(a,b,&q, &r);

    printf("Quoziente : %d\n", q);
    printf("Resto : %d\n", r);

}