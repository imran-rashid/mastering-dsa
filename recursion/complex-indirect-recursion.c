#include <stdio.h>

void funB(int n);
void funA(int n){
    if (n > 0){
        funB(n/2);
        printf("%d\n", n);
        funA(n/2);
    }
}

void funB(int n){
    if (n > 0){
        funA(n-1);
        printf("%d\n", n);
        funB(n-1);
    }
}

int main(){
    funA(5); // 1 2 1 5 1 2 1
}