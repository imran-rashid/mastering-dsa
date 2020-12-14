// find the single missing element in an sorted array

#include <iostream>
using namespace std;

int main(){
    int array[] = {6,7,8,9,10,12};
    int diff = array[0] - 0;
    int length = sizeof(array)/sizeof(int);

    // time complexity is O(n)
    for(int i = 0; i < length; i++){
        if (diff < (array[i] - i)){
            cout << "Missing value is " << (i+diff) << endl; // 11
        }
    }
}
