// calculate the exponential (**) of a number using recursion

#include <stdio.h>

// pow(m,n) == m*m*m*m*m*m*m*m*....*n-1 times * m
// time and space complexity is O(n)
int Exponential(int n, int power){
    if (power > 0){
        return Exponential(n, power-1) * n;
    }
    return 1;
}

// time o(n) and space is o(1)
int Exponential_2(int n, int power){
    if (power > 0){
        int res = 1;
        for (int i = 0; i < power; i++){
            res *= n;
        }
        return res;
    }
    return 1;
}

int main(){
    printf("%d\n", Exponential(2, 5)); // 32
    printf("%d\n", Exponential_2(2, 5)); // 32
}

