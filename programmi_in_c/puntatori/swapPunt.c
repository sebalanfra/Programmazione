#include <stdio.h>
void swap(int *pm, int *pn){

    int t;

    t = *pm;
    *pm = *pn;
    *pn = t;

}
int main(){

    int a = 5, b = 9;

    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
}