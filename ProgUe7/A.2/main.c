#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_LEN 50

 typedef struct {
         char name[NAME_LEN+1];
         int personalnummer;
         float gehalt;
 }angestellter;

angestellter ang(char name[], int n, float m) {
    angestellter a;
    strcpy(a.name, name);
    a.personalnummer =n;
    a.gehalt=m;
    return a;
}

 void binaer_speichern(angestellter arr[],int anz) {
    FILE* f = fopen("angestellte.dat", "wb");
    fwrite(&anz, sizeof(anz), 1, f);
    fwrite(&arr[0], sizeof(angestellter), anz, f);
    fclose(f);
 }

 void binaer_laden_und_ausgeben(void) {
    int laenge = 5;
    FILE* f = fopen("angestellte.dat", "rb");
    fread(&laenge, sizeof(laenge), 1, f);
    angestellter *ang = malloc(laenge * sizeof(angestellter));
    fread(ang, sizeof(angestellter), laenge, f);
    fclose(f);

    for (int i = 0; i < laenge; i++) {
        printf("%s %d %f",ang[i].name, ang[i].personalnummer, ang[i].gehalt);
    }
 }


int main(void) {
    angestellter arr[5];
    arr[0]=ang("Furkan",1,1000);
    arr[1]=ang("Deti",2,2000);
    arr[2]=ang("Schehat",3,3000);
    arr[3]=ang("Aland",4,4000);
    arr[4]=ang("Eitan",5,-2000); 

    binaer_speichern(arr, 5);
    binaer_laden_und_ausgeben(); 
    return 0;
}