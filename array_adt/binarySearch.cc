// Binary Search on array
// time complexity for worst and average case is O(long)
// space is O(n)
// binarySearch on recursion is a bad practice for optimization

#include <iostream>
using namespace std;

struct Array{
    int *array;
    int size;
};

int binarySearch(struct Array *array, int key){
    int lower = 0;
    int upper = array -> size-1;

    while (lower <= upper){
        int mid = (lower+upper)/2;

        if (array -> array[mid] == key){
            return mid; // time complexity is O(log n)
        }

        // when key is greater than mid
        if (key > array -> array[mid]){
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }
    return -1; // time complexity is O(log n)
}

int main(){
    struct Array arr;
    cout << "Enter the size ";
    cin >> arr.size;

    arr.array = new int[arr.size];
    cout << "Enter the values ";
    for(int i = 0; i < arr.size; i++){
        cin >> arr.array[i];
    }

    int key;
    cout << "Enter the value you wanna search: ";
    cin >> key;

    int result = binarySearch(&arr, key);
    if (result == -1){
        cout << "Value not found" <<endl;
    } else {
        cout << "The value found at index " << result <<endl;
    }

    delete []arr.array;
    arr.array = nullptr;
}