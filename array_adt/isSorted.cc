// check the array is sorted or not

#include <iostream>
using namespace std;

bool is_sorted(){
    int array[] = {10,20,5,8};
    int i = 0, l = sizeof(array)/sizeof(int) - 1;

    while(i < l){
        if (array[i] > array[i+1]){
            return false;
        }
        i += 1;
    }
    return true;
}

int main(){
    bool res = is_sorted();
   if (res){
       cout << "array is sorted" << endl;
   } else {
       cout << "array isn't sorted" << endl;
   }
}