#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[]) {
 int x,y;

 if (argc!=3) {

  printf("Benutzung: %s <zahl> <zahl>\n", argv[0]);
  return -1;
 }
 
 x=atoi(argv[1]);
 y=atoi(argv[2]);

 if(!(x<0 || x>0 || x==0)) {
  printf("Kann '%s' nicht in Zahl umwandeln: Falsches Format\n", argv[1]);
        return 1;
 }

 printf("%d + %d = %d\n", x, y, x+y);
 return 0;
}
