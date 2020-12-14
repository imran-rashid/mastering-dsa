// write the output of this program

#include <stdio.h>

void foo(int n, int sum){
    int k = 0;
    int j = 0;
    if (n == 0) return;
    k = n % 10;
    j = n / 10;
    sum += k;
    foo(j, sum);
    printf("%d\n", k); // 2 0 4 8 (returning time)
    // printf("%d...\n", sum); => 14 12 12 8 (returning time)
}

int main(){
    int sum = 0; // sum inside main
    foo(2048, 0);
    printf("%d\n", sum); // 0
}