#include "Person.h"
#include <string>
#include <iostream>

using namespace std;  //sonst muss ich bei string und cout std:: hinzufuegen

Person::Person() {
    name = "";
    geburtsjahr = 0;
}

Person::Person(string name, int geburtsjahr) {
    this->name = name;
    this->geburtsjahr = geburtsjahr;
}


void Person::print() {
    cout << name << " ist geboren " << geburtsjahr << endl;
}  
