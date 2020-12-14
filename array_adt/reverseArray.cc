// reverse an array in place

#include <iostream>
using namespace std;

struct Array{
    int *array;
    int length;
};

// time is O(n)
void reverseArray(struct Array *arr){
    int start = 0;
    int end = arr->length-1;

    while (start < end){
        int temp = arr->array[start];
        arr->array[start] = arr->array[end];
        arr->array[end] = temp;

        start += 1;
        end -= 1;
    }
}

int main(){
    struct Array arr;
    arr.array = new int[8] {4,8,13,16,20,25,28,33};
    arr.length = 8;

    reverseArray(&arr);
    cout << "The values are ";
    for(int i = 0; i < arr.length; i++){
        cout << arr.array[i] << " ";
    }
    cout <<endl;

    delete []arr.array;
    arr.array = nullptr;
}