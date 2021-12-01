#include <stdio.h>
#define LENGTH 5


int main(void) {
 int a[] = {1,2,3,4,5};
 int b[LENGTH];
 
 for(int i=0; i<LENGTH; i++) {
  *(b+i) = *(a+LENGTH-i-1);
 }
 
 for(int i=0; i<LENGTH; i++) {
  printf("%d", *(a+i));
 }
 printf("\n");

 for(int i=0; i<LENGTH; i++) {
  printf("%d", *(b+i));
 }
 printf("\n");
 return 0;
} 