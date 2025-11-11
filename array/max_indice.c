#include <stdio.h>
#define d 10
void cercaMax(int a[], int n){

    int max = 0;

    for(int i = 0;i< n;i++ ){
        if(max <= a[i]){
            max = i;
        }
    }

    printf("Il valore massimo e: %d che sta all' indice %d",a[max], max);
}
void input_array(int n, int a[]){

    for(int i = 0;i<n; i++){
        scanf("%d", &a[i]);
    }
}

int main(){

    int a[d], i, n;

    printf("Quanti elementi ci vuoi nell' araay?:\n");
    scanf("%d", &n);

    input_array(n,a);

    cercaMax(a, n);
}