// nPr == n! / (n-r)! (permutation formula)
#include <stdio.h>

// n! or (n-r)!
int factorial(int n){
    if (n > 1){
        return n*factorial(n-1);
    }
    return 1;
}

int nPr(int n, int r){
    int t1 = factorial(n);
    int t2 = factorial(n-r);
    return t1 / t2;
    // printf("%d %d\n", t1,t2);
}

int main(){
    printf("%d\n", nPr(4, 2)); // 12
}