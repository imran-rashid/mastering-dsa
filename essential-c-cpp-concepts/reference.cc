// reference is a nickname of a variable | it is available only c++
// https://www.geeksforgeeks.org/references-in-c/

#include <iostream>

int main(){
    int a = 10;
    int &r = a; // reference variable
    // int r = a; // it is made a new copy of a

    std::cout << a << " " <<r <<std::endl; // 10 10
    r++;
    std::cout << a << " " <<r <<std::endl; // 11 11

}