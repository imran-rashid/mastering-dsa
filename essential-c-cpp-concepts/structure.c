// collection of related data members under one name. It is user defined data types
// All variables we declare inside program it is staying in stack frames main memory.

#include <stdio.h>

// no memory is allocated here
struct rectangle {
        // rectange has 2 parts
        int length;
        int breadth;
    };

int main(){
    // after creating struct type it will be occupying memory
    struct rectangle r; // one way
    r.length = 10;
    r.breadth = 50;

    struct rectangle r = {10, 5}; // declare and initialization
    printf("Area of rectangle is %d\n", r.length*r.breadth);
    return 0;
}