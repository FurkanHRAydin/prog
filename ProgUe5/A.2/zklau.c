#include<stdio.h>
#include<stdlib.h>

typedef struct {
 float x, y;
} point;

int main(void) {
 int anzahl, i;
 point *array;
 scanf("%d", &anzahl);
 array = (point*)malloc(anzahl * sizeof(point));
 for (i = 0; i < anzahl; i++) {
 scanf("%f %f", &array[i].x, &array[i].y);
 }
 return 0;
}

int main(void) {
 int anzahl, i;
 scanf("%d", &anzahl);
 point *array[] = {NULL};
 for(i=0; i<anzahl;i++) {
  array[i] = (point*)malloc(sizeof(point));
 }
 for (i = 0; i < anzahl; i++) {
 scanf("%f %f", &array[i]->x, &array[i]->y);
 }
 return 0;
}