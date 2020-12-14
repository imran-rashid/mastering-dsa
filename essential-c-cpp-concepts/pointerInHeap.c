// we can use pointer to access heap memory

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p; // pointer variable, it has also address and is occupied memory

    // access heap
    p = (int *)(malloc(5*sizeof(int))); // malloc return void so type casting
    printf("%d\n", *p); // random heap memory address

    // c++ version for doing same thing
    // p = new int[5];
}