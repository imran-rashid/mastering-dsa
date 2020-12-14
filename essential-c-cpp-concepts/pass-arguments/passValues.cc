#include <iostream>

void swap(int x, int y){ // x, y receives a copy of values from swap(), a new object is created | they are pointing different objects
    int temp = x;
    x = y; // 20
    y = temp; // 10
}

int main(){
    int a = 10, b = 20;
    swap(a, b); // 20 10
    std::cout << a << " " << b <<std::endl; // 10 20
}