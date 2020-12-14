// separate negative and positive number from an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;

    cout << "Enter the elements ";
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    // time is O(n)
    int i = 0, j = sizeof(array)/sizeof(int) - 1;
    while (i < j){
        // i is increasing until it find positive
        while (array[i] < 0){
            i += 1;
        }

        // j is decreasing until it find negative
        while (array[j] >= 0){
            j -= 1;
        }

        if (i < j){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    cout << "Elements after interchange ";
    for(auto & i: array){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}