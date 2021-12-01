#include<stdio.h>

void print(void) {printf("Hallo\n");}
void print2(int i) { printf("%d\n", i); }

void times(int n, void (*ptr) (void)) {
    for(int i = 0; i<n; ++i) {
        (*print)();
    }
}

void times2(int n, void (*ptr) (int i)) {
    for(int i =0; i<n; i++) {
        (*print2)(i);
    }
}

int main(void) {
    times(3, print);
    times2(3,print2);
    return 0;
}