/**
 * head recursion processing at function returning time ...
 * if a recursive function is calling itself and that function call is the first statement 
 * in the program then it is called head recursion. 
 * calling time it doesn't do anything. returning time it is processed all operation.
*/

#include <stdio.h>

// time & space complexity is O(n)
void func(int x){
    if (x > 0){
        func(x-1); // => 1 -> 2 -> 3
        printf("%d\n", x); // this will print at func returning time
    }
}

// time complexity is O(n) and space complexity is O(1)
void func2(int n){
    int i = 1;
    while (i <= n){
        printf("%d\n", i); // => 1 -> 2 -> 3
        i += 1;
    }
}

int main(){
    func(3);
    func2(3);
}