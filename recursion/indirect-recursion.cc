// Indirect recursion function calling each other in a circular fashion.

#include <iostream>
using namespace std;

void funB(int n);
void funA(int n){
    if (n > 0){
        cout << n <<endl;
        funB(n-1);
    }
}

void funB(int n){
    if (n > 1){
        cout << n <<endl;
        funA(n/2);
    }
}

int main(){
    funB(20); // => 20 -> 10 -> 9 -> 4 -> 3 -> 1
    return 0;
}