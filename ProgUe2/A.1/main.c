#include<stdio.h>
#include"differenz.h"
#include"summe.h"

void berechne(void) {
 char c;
 printf("Ihre Wahl:\n <S>umme oder <D>ifferenz? ");
 scanf("%c",&c);
 if(c=='S') { printf("Ergebnis: %d", summe());  }
 else if (c=='D') { printf("Ergebnis: %d", differenz());  }
}


int main(void) {
    berechne();
    return 0;
}