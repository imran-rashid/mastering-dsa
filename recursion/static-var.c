#include <stdio.h>

int func(int n){
    // after return 0 x has only one copy and it shared with others recursive call
    static int x = 0; // every time funcion is called x remain previous value not set 0
    if (n > 0){
        x++;
        return func(n-1) + x;
    }
    return 0;
}

int main(){
    printf("%d", func(5)); // 25
    return 0;
}