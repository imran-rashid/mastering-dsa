#include <stdio.h>
#include <stdlib.h>

// int []func(int n){} => same thing
int *func(int n){
    int *p;
    p = (int *)(malloc(n*sizeof(int))); // inside heap memory
    return p;
} // it is returning point of array

int main(){
    int *a;
    a = func(5);
}