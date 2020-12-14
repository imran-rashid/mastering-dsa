#include <iostream>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle &r1){ // refer to original value
    r1.breadth = 5;
    return r1.length*r1.breadth;
}

int main(){
    struct Rectangle r = {10, 20};
    std::cout << area(r) << std::endl; // 50
    std::cout << r.breadth <<std::endl; // 5
}