#include<stdio.h>
void swap(int *pm, int *pn){

    int t;

    t = *pm;
    *pm = *pn;
    *pn = t;

}
void ordina(int *pa, int *pb){

    if(*pb <= *pa){
        swap(pa, pb);
    }
}
int main(){
    int a,b;

    scanf("%d%d", &a, &b);

    printf("Normale : %d %d\n", a,b );

    ordina(&a, &b);

    printf("Ordinato : %d %d\n", a, b);
}