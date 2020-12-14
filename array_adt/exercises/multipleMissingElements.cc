// find the missing elements in an sorted array

#include <iostream>
using namespace std;

void missingValues(int array[], int difference, int length){
    // time complexity is O(n)
    for(int i = 0; i < length; i++){
        while (difference < (array[i]-i)){
            cout << "Missing number is " << (i+difference) << endl;
            difference += 1;
        }
    }
}

// print missing elements in one line
void missingValues2(int array[], int difference, int length){
    int elements[4], index=  0;

    for(int i = 0; i < length; i++){
        while (difference < (array[i]-i)){
            elements[index] = (i+difference);
            difference += 1;
            index++;
        }
    }

    cout << "Missing elements are ";
    for(auto & i: elements){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int array[] = {6,7,8,9,11,12,15,16,17,18,19};
    int difference = array[0] - 0; // firstvalue - index
    int length = sizeof(array)/sizeof(int);

    missingValues(array, difference, length);
    missingValues2(array, difference, length);
}