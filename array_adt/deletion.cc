// program for delete an item from an array

#include <iostream>
using namespace std;

struct Array{
    int *array;
    int size;
    int length;
};

// worst case O(n) & best case O(1)
void delete_(struct Array *arr, int index){
    if (index >= 0 and arr->length > index){
        for(int i = index; i < arr->length-1; i++){
            arr->array[i] = arr->array[i+1];
        }
        arr->length -= 1;
    }
}

// worst case O(n)
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

    int index;
    cout << "What index's value you want to delete ";
    cin >> index;
    delete_(&array, index-1);
    cout << "After delete the array is ";
    display(&array);
    
    delete []array.array;
    array.array = nullptr;
    return 0;
}