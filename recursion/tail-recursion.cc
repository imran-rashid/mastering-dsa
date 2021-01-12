/**
 * tail recursion is processing at calling time ...
 * if a recursive function is calling itself and that function call is the last statement in the program. 
 * then it is called tail recursion. tail recursion processed every operation in calling time. returning time just simply return.

 * time & space complexity of below function is O(n)
 * so, if we've to write program where tail is necessary better use loop instead of tail for optimization.
*/

#include <iostream>
using namespace std;

// it is created n+1 number activation record in stack
void func(int x){
    if (x > 0){
        cout << x <<endl; // this will print at calling time
        func(x-1); // => 3 -> 2 -> 1
    }
}

// time complexity of below function is O(n) and space complexity is O(1)
// it is created only one activation record in stack
void func2(int n){
    while (n > 0){
        cout << n << endl; // 3 2 1
        n -= 1;
    }
}

int main(){
	func(3);
    func2(3);
}
