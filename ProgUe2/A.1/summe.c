#include<stdio.h>
#include "input.h"

int summe(void) {
 int a= get_input("Erster Summand: ");
 int b= get_input("Zweiter Summand: ");
 return a+b-4;
} 
