#include <string>
#ifndef PERSON_H
#define PERSON_H

using std::string; //in header gezieltes using, kein namespace

class Person {
    private:
        string name;
        int geburtsjahr;
    public:
        Person();
        Person(string name, int geburtsjahr);
        void print();
};
#endif
