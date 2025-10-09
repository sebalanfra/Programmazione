#include<stdio.h>
int main(){
  
    
    int g =0, a=0, m=0;
    int N0, N1, N2, N3, JD;

    do{
        printf("Inserisci un giorno del mese : ");
        scanf("%d", &g);
    }while(g<= 0 || g> 31);

    do{
        printf("Inserisci un mese : ");
        scanf("%d", &m);
    }while(m<= 0 || m> 13);


    printf("Inserisci un anno: ");
    scanf("%d", &a);
    
    //N0 = (M-14) / 12
    N0 = (m-14) / 12;
    
    // N1 = [1461(A+4800 + N0)] / 4
    N1 = 1461*(a+4800 + N0) /4;

    //N2 = [367(M - 2 - 12N0)] / 12
    N2 = 367*(m-2-(12*N0)) / 12;

    //N3 = [3(A+ 4900 + N0)] / 400
    N3 =3*(a+4900+ N0) / 400;

    //JD = N1 + N2 + N3 + G -32075
    JD = N1 + N2 - N3 + g -32075;

    printf(" Il giorno Giuliano è: %d\n", JD);

    
}