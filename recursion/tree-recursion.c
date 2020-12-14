/**
 * time complexity depends on function calls and space depends on stack heights

 * if a recursive function is calling itself more than one time then it is called tree recursion.
 * time complexity is O(2^n) and space is O(n)
*/

#include <stdio.h>

void func(int n){
    if (n > 0){
        printf("%d\n", n);
        func(n-1);
        func(n-1);
    }
    return;
}

int main(){
    func(3); // => 3 -> 2 -> 1 -> 1 -> 2 -> 1 -> 1
}
