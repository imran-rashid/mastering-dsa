// we can't pass array as a call by value, only call by address.
// but if array inside struct we can pass it as a call by value without error

#include <stdio.h>

struct rectangle{
    int l;
    int b;
};

void changeLength(struct rectangle *p){
    p -> l = 20;
}

int main(){
    struct rectangle r = {10, 40};
    changeLength(&r); // entire struct
    printf("%d\n", r.l); // 20
}