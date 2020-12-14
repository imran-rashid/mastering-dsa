// write down the output of this program

#include <stdio.h>

int fun(int n){
    static int i = 1;

    if (n >= 5){
        return n;
    }
    n += 1;
    i += 1;
    return fun(n);
}

int main(){
    printf("%d\n", fun(1)); // 7
}