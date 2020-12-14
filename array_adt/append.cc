// program to add value in the end of the array

#include <iostream>
using namespace std;

struct Array{
    int *array;
    int size;
    int length;
};

void append(struct Array *arr, int value){
    arr->array[arr->length] = value;
    arr->length += 1;
}

void display(struct Array *arr){
    for(int i = 0; i < arr->length; i++){
        cout << arr->array[i] << " ";
    }
    cout << endl;
}

int main(){
    struct Array array;
    cout << "Size of the array ";
    cin >> array.size;
    array.length = 0;
    array.array = new int [array.size];

    int n;
    cout << "How many elements ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> array.array[i];
    }
    array.length = n;

    int value;
    cout << "What value you want to append ";
    cin >> value;
    append(&array, value);
    cout << "After append " << value << " the array is ";
    display(&array);
    
    delete []array.array;
    array.array = nullptr;
    return 0;
}