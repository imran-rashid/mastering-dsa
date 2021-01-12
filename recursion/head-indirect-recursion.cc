#include <iostream>
using namespace std;

void funB(int n);
void funA(int n){
    if (n > 0){
        funB(n/2);
        cout << n <<endl;
    }
}

void funB(int n){
    if (n > 0){
        funA(n-1);
        cout << n <<endl;
    }
}

int main(){
    funA(10); // 1 2 4 5 10
}
