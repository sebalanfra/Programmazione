#include<stdio.h>
#define dim 5

int main(){
    int num[dim];
    
    for(int i = 0;i <dim ;i++){
        scanf("%d", &num[i]);
    }

    for(int i = dim-1; i>=0;i--){
        printf("%d", num[i]);
    }

    printf("\n");
    return 0;
}