// program for display all the values in an array

#include <iostream>
using namespace std;

void display(int array[], int n){
    cout << "Elements are ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array ";
    cin >> n;

    int array[n];
    cout << "Enter the elements ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    display(array, n);
}