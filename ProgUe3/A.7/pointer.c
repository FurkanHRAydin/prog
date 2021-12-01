#include <stdio.h>
int main(void) {
 int i;
 int* ip;
 printf("Eingabe: ");
 scanf("%d", &i);
 ip = &i;
 printf("Eingabe war %d\n",
 *ip);
 return 0;
}