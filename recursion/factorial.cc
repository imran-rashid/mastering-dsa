// print factorial of a number using recursion and loop

#include <iostream>
using namespace std;

// time & space complexity is O(n)
// fact(n) = 1*2*3*4....*(n-1)*n
// fact(n) = fact(n-1) * n
int recursiveFactorial(int n){
    if (n > 1){
        return recursiveFactorial(n-1) * n;
    }
    return 1;
}

// time complexity is O(n) and space is O(1)
int iterativeFactorial(int n){
    int sum = 1;

    for(int i = n; i >= 1; i--){
        sum *= i;
    }
    return sum;
}

int main(){
    cout << iterativeFactorial(5) <<endl;
    cout << recursiveFactorial(5) <<endl;
}
