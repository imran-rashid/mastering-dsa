// array is a collection of simillar data types.

#include <iostream>
using namespace std;

int main(){
    // array declaration
    int a[3];

    // initialization array
    a[0] = 10;
    a[1] = 12;
    a[2] = 13;

    for(auto i: a){
        cout << i << " "; // 10 12 13
    }
    cout <<endl;
}