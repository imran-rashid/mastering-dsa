#include <stdio.h>

struct rectangle{
    int length;
    int breadth;
};

int main(){
    // normal accessing
    struct rectangle r = {10, 50};
    
    // accessing with pointer
    struct rectangle *p;
    p ->length = 20;
    p ->breadth = 30;
    printf("Area is %d", p->breadth*p->length);
}