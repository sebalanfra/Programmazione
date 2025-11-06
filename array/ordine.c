#include<stdio.h>
#define dim 5
int main(){
    int m, a[dim];
    int j;

    for(int dl = 0;dl <dim; dl++){
        scanf("%d", &m);
        j = dl;
        while(j > 0 && m <a[j -1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = m;
    }

    for(int i = 0; i<dim; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}