#include <stdio.h>
int main() {
  // definizioni di variabili
  int g1, g2, m1, m2, a1, a2;
  int N0, N1, N2, N3;
  int JD1, JD2;

  // input di G, M, A
  printf("Ora inserirai la prima data!!!\n\n");
  do{
    printf("Inserisci un giorno: ");
    scanf("%d", &g1);
  }while(g1<0 || g1>=31);

  do{
    printf("Inserisci un mese dell' anno: ");
    scanf("%d", &m1);
  }while(m1<0 || m1>12);

  printf("Inerisci un anno : ");
  scanf("%d", &a1);

    N0 = (m1-14) / 12;
    N1 = 1461*(a1+4800 + N0) /4;
    N2 = 367*(m1-2-(12*N0)) / 12;
    N3 =3*(a1+4900+ N0) / 400;
    JD1 = N1 + N2 - N3 + g1 -32075;

    printf(" \n\n");
    printf("Ora inserirai la seconda data\n\n");
    // resettiamo i valori 
    N0 =0, N1 =0, N2 =0, N3=0;

    do{
    printf("Inserisci un giorno: ");
    scanf("%d", &g2);
  }while(g2<0 || g2>=31);

  do{
    printf("Inserisci un mese dell' anno: ");
    scanf("%d", &m2);
  }while(m2<0 || m2>12);

    printf("Inerisci un anno : ");
    scanf("%d", &a2);


    N0 = (m2-14) / 12;
    N1 = 1461*(a2+4800 + N0) /4;
    N2 = 367*(m2-2-(12*N0)) / 12;
    N3 =3*(a2+4900+ N0) / 400;
    JD2 = N1 + N2 - N3 + g2 -32075;

    printf(" Il  primo giorno Giuliano è: %d\n", JD1);
    printf(" Il  secondo giorno Giuliano è: %d\n", JD2);   

    int JDtot;
    JDtot = JD1 - JD2;
    printf("La differenza tra i giorni Giuliani è: %d\n\n", JDtot);
}