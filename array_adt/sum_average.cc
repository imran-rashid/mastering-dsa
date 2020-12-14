// sum and average method in array ADT

#include <iostream>
#include <numeric>
using namespace std;

struct Array {
    int *A;
    int length;
};

int sum(struct Array &array){
    int result = 0;
    return accumulate(array.A, array.A+array.length, result);
}

int average(struct Array &array){
    return sum(array) / array.length;
}

int main(){
    struct Array arr;
    arr.A = new int[9] {8,3,9,15,6,10,7,12,4};
    arr.length = 9;

    cout << "Sum is " << sum(arr) <<endl;
    cout << "Mean is " << average(arr) <<endl;

    delete []arr.A;
    arr.A = nullptr;
}