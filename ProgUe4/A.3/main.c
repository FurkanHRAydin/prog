#include <stdio.h>

void tausche_int(int* x, int* y) {  //call by refernz
 int dummy = *x; //hier wird derefernziert
 *x=*y;     //dereferzierung
 *y=dummy;  //derefernzierung
}


void tausche_intPtr(int** ptx, int** pty) {
 int* ptdummy = *ptx;
 *ptx=*pty;
 *pty=ptdummy;
}


int main(void) {
 int i = 1; int j = 2;
 printf("i = %d, j = %d\n", i, j); /* Gibt 1 und 2 aus */
 tausche_int(&i, &j); 
 printf("i = %d, j = %d\n", i, j); /* Gibt 2 und 1 aus */
 

 int* pti = &i;
 int* ptj = &j;
 printf("pti = %p, ptj = %p\n", (void*)pti, (void*)ptj);
 tausche_intPtr(&pti, &ptj);
 printf("pti = %p, ptj = %p\n", (void*)pti, (void*)ptj);


 return 0;
}