// min and max method in array ADT

#include <iostream>
using namespace std;

struct Array {
    int *A;
    int length;
};

int max(struct Array *array){
    int max = array->A[0];
    for(int i = 1; i < array->length; i++){
        if (array->A[i] > max){
            max = array->A[i];
        }
    }
    return max;
}

int min(struct Array *array){
    int min = array->A[0];
    for(int i = 1; i < array->length; i++){
        if (array->A[i] < min){
            min = array->A[i];
        }
    }
    return min;
}

int main(){
    struct Array arr;
    arr.A = new int[9] {8,3,9,15,6,10,7,12,4};
    arr.length = 9;

    cout << "Max value is " << max(&arr) <<endl;
    cout << "Min Value is " << min(&arr) <<endl;

    delete []arr.A;
    arr.A = nullptr;
}