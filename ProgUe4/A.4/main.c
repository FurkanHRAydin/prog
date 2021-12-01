/* main.c */
#include <stdio.h>
int main(void) {
 int a[]= { 1, 5, 19, -4, 3 };
 int* p;
 int i;
 /* Lasse p auf das 0-te Array-Element verweisen. */
 p = &a[0];

 for (i=1; i<5; i++) {
 /* Prüfe, ob das Array-Element i größer als das von
  p referenzierte Element ist */
  if ( a[i] > *p ) {
 /* Lasse p auf das Array-Element i verweisen */
   p = &a[i];
  }
 }
 /* Gib das von p referenzierte Element als das größte aus: */
 printf("Maximum: %d\n", *p );
 return 0;
}
