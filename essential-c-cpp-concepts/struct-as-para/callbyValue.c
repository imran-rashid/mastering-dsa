// we can pass entire struct as a call by value, reference or address

#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r1){ // new struct created with r1
    return r1.length*r1.breadth;
}

int main(){
    struct Rectangle r = {10, 20};
    printf("%d\n", area(r)); // 200
}