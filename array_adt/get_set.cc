// set and get method in array ADT

#include <iostream>
using namespace std;

struct Array {
    int *A;
    int length;
};

int get(struct Array *array, int index){
    return array->A[index];
}

void set(struct Array *array, int index, int x){
    if (index >= 0 and index <= array->length){
        array->A[index] = x;
    }
}

int main(){
    struct Array arr;
    arr.A = new int[9] {8,3,9,15,6,10,7,12,4};
    arr.length = 9;

    cout << "Value is " << get(&arr, 6) <<endl;
    set(&arr, 6,255);
    cout << "Value is " << get(&arr, 6) <<endl;

    cout << "Elements are ";
    for(int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;

    delete []arr.A;
    arr.A = nullptr;
}