// program for insert value in sorted array

#include <iostream>
using namespace std;

struct Array{
    int *array;
    int length;
};

// inserting without knowing position (clean code)
void insertValue(struct Array *arr, int value){
    int x = arr->length;
    while (arr->array[x-1] > value){
        arr->array[x] = arr->array[x-1];
        x -= 1;
    }
    arr->array[x] = value;
    arr->length += 1;
}

int main(){
    struct Array arr;
    arr.array = new int[10] {4,8,13,16,20,25,28,33};
    arr.length = 8;

    insertValue(&arr, 18);
    cout << "The values are ";
    for(int i = 0; i < arr.length; i++){
        cout << arr.array[i] << " ";
    }
    cout <<endl;

    delete []arr.array;
    arr.array = nullptr;
}