// reference is a fancy name of a variable.
// it won't create new copy rather point the same variable
// if original is changed after reference ref also changed

#include <iostream>

void swap(int &x, int &y){ // it is doing the same things like  pointer | modify the original parameter because they are reference the same object
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10, b = 20;
    swap(a, b); // 20 10
    std::cout << a << " " << b <<std::endl; // 20 10
}