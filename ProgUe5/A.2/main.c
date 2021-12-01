#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define NAME_LEN 40
#define ANZAHL  10

typedef struct {
	char name[NAME_LEN+1];
	int personalnummer;
	float gehalt;
} angestellter;

void puffer() {
 do {} while (getchar() != '\n');
}

int main(void) {
 int i;
 int loop = false;
 char a;

 do {
  angestellter *array[ANZAHL] = {NULL};

  printf("Welchen Angestellelten wollen sie bearbeiten (1-9)? ");
  scanf("%d", &i);

  puffer();

  if(array[i] == NULL) {

	array[i]= (angestellter*)malloc(sizeof(angestellter));
	printf("Geben Sie den Namen an! ");
	scanf("%40[^\n]", array[i]->name);
	puffer();

	printf("Geben Sie die Personalnummer an! ");
	scanf("%d", &(*(array[i])).personalnummer);

	printf("Geben Sie den Gehalt an! ");
	scanf("%f", &(*(array[i])).gehalt);

  }else {
	 free(array[i]);
	 array[i] = NULL;
	 printf("Angestellter geloescht");
  }

  for(int j = 0; j<ANZAHL; j++) {
	if(array[j] != NULL) {
	 printf("Perosnal: %d:, %s, %d, %f\n",j,array[j]->name,array[j]->personalnummer,array[j]->gehalt);
	}
  }

  printf("Weiter bearbeiten? (y/n)");
  scanf("%s", &a);

  if(a=='n') {
	loop = false;
  } else if (a == 'y') {
	loop = true;
    }

 }while(loop);
}

  
	




