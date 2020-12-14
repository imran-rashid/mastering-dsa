#include <stdio.h>

int func(int n){
    int x = 0; // every time funcion is called x set to 0
    if (n > 0){
        x++;
        return func(n-1) + x;
    }
    return 0;
}

int main(){
    printf("%d", func(5)); // 5
    return 0;
}