#include<stdio.h>
#include<math.h>
float radiceN(float a, int N){

    float x = 1.0f, p;
    int i = 0;

    do{
        p = 1.0f;
        for(i=0; i< N-1; i++){
            p = p*x;
        }
        x = ((N-1)*p*x+a)/(N*p);

    }while(fabsf(p*x-a)/a > 1e-5);

    return x;
}
int main(){

    int  M, i;
    float y;

    printf("Inserisci due numeri :\n");
    scanf("%f%d", &y, &M);

    for(i = 2; i<=M; i++){
        printf("%f\n", radiceN(y, i));
    }
}