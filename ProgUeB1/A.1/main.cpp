#include <iostream>

using namespace std;

int *createArray(int n) {
    int *arr {new int[n]};  // in C malloc(n*sizeof(int))
    return arr;
}

void releaseArray(int* &x) { //x ist ein Alias (keine Wertzuweisung, keine kopie) fuer Echtes Call by referenz, aber sieht aus wie Call by value
    delete[] x;
    x = nullptr;
}

/*
void free0(char** p) {
 free(*p);
 *p=NULL;
}
*/


int main(void) {
    int *arr {createArray(5)};

    for(int i=0; i< 5; i++) {

        arr[i] = i;
        cout << arr[i] << endl;
    }

    releaseArray(arr);

    return 0;
}