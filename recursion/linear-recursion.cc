/**
* If a function is calling itself then it is called recursive function..
* Recursive function has 2 cases
    * base case
    * recursive case
otherwise it will be infinite recursive call
* Recursion func works in 2 ways
    * calling time
        * if anything above recursion call then it will print calling time 
    * returning time
        * if anything below recursion call then it will print returning time 
*/

// if a recursive function is calling itself and it is processed all operation calling and returning 
// time then it is called linear recursion.

#include <iostream>

// time and space is O(n)
void fun(int x){
    if (x > 0){
        std::cout << x <<std::endl; // 3 2 1
        fun(x-1);
        std::cout << x <<std::endl; // 1 2 3
    }
}

int main(){
    fun(3);
}
