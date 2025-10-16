#include<stdio.h>
void swap(int x, int y){

    int t;

    t = x;
    x = y;
    y = t;

}
int main(){

    int a,b;
    int tmp = 0;

    scanf("%d%d", &a, &b);

    swap(a,b);

    printf("%d\n%d\n", a, b);
}