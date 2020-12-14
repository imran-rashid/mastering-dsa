// in a nested recursion a recursive function passed as a parameter

#include <iostream>

int nested_rec(int n){
    if (n > 100) return n-10;
    return nested_rec(nested_rec(n+11));
}

int main(){
    std::cout << nested_rec(95) <<std::endl; // => 91
}