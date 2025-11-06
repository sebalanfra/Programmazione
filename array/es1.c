#include<stdio.h>
#define dim 5

int main(){

    float a[5] =  {1.2, 3.5, 5.6, 0.0,  6.7};
    
    for(int i = 0;  i< 5; i++){
        printf("%f\n", a[i]);
    }

    return 0;

}