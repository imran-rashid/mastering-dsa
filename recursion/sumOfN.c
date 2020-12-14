// calculate sum of natural numbers
#include <stdio.h>

// time & space complexity is O(n)
// sum(n) = 1+2+3+4....+(n-1)+n
// sum(n) = sum(n-1) + n
int Sum(int n){
    if (n > 0){
        return Sum(n-1) + n;
    }
    return 0;
}

// time and space is O(1)
int Sum2(int n){
    return (n*(n+1)) / 2;
}

// time complexity is O(n) and space is O(1)
int Sum3(int n){
    int result = 0;
    for (int i = 1; i <= n; i++){
        result += i;
    }
    return result;
}

int main(){
    printf("%d\n", Sum(7));
    printf("%d\n", Sum2(7));
    printf("%d\n", Sum3(7));
    return 0;
}