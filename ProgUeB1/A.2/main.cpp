#include "Person.h"
#include <iostream>

int main(void) {
    Person p[] {{"Furkan", 2000}, {"Aland", 2000}};  //konstruiert hier mit standart konstruktor wenn 

    for(Person& x : p) { //spart das unnoetige kopieren
        x.print();
    } 
    return 0;
}