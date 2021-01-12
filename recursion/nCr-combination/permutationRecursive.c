// calculating permutation with recursion (pascal's triangle) [Incomplete]

#include <stdio.h>

int nPr(int n, int r){
    if (r == 0 || n == r){
        return 1;
    }
    // return nPr(n-1,r-1)+ nPr(n-1,r);
}

int main(){
    printf("%d\n", nPr(4, 2));
}
