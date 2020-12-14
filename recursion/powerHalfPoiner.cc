// making power using recursion problem reduce half multiplication
// https://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/

#include <iostream>
using namespace std;

// time complexity is O(log n) and space is O(1)
int powerHalf(int n, int p){
    if (p > 0){
        if (p & 1){ // return 1(odd)
            return n*powerHalf(n*n, p/2);
        }
        return powerHalf(n*n, p/2);
    }
    return 1;
}

int main(){
    cout << powerHalf(2, 5) <<endl;
    return 0;
}