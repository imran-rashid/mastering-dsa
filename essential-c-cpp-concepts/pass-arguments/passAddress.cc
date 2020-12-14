// call by address(pointer)
// pointer is modified original parameters

#include <iostream>

void swap(int *x, int *y){ // x,y containing a,b's address | anything chages x,y reflects also a,b
    int temp = *x; // 10
    *x = *y; // 20
    *y = temp; // 10
}

int main(){
    int a = 10, b = 20;
    swap(&a, &b); // 20 10
    std::cout << a << " " << b <<std::endl; // 20 10
}