// write the answer of this below program (original)

#include <iostream>

int f(int &x, int c){
    c -= 1;
    if (c == 0) return 1;
    x += 1;
    return f(x, c) * x;
}

int main(){
    int p = 5;
    std::cout << f(p,p) <<std::endl; // 9**4
}