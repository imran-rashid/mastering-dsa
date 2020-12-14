/**
 * ADT - abstract data types
 * representation of data and set of operations on data called adt

 * Array ADT data (compiler by itself) :=
    * array space
    * size
    * length
 * Possible operations (user defined) :=
    * display()
    * append(x)
    * delete(index)
    * insert(index, x)
    * search()
    * get(index)
    * set(index, x)
    * max() / min()
    * rotate() / shift()
*/

#include <iostream>
using namespace std;

struct Array {
   int *array;
   int size;
   int length;
};

void initialize(struct Array arr, int n){
   for (int i = 0; i < n; i++){
      cin >> arr.array[i];
   }
}

void display(struct Array arr, int n){
   for(int i = 0; i < n; i++){
      cout << arr.array[i] << " ";
   }
   cout <<endl;
}

int main(){
   struct Array array_;
   cout << "Enter the size of the array: ";
   cin >> array_.size;
   cin.ignore();

   array_.array = new int[array_.size];
   array_.length = 0;
   int n;
   cout << "How many numbers you want to insert: ";
   cin >> n;
   cin.ignore();

   cout << "Enter the elements: ";
   initialize(array_, n);
   array_.length = n;
   cout << "The length of the array is " << array_.length << endl;
   cout << "Elements are: ";
   display(array_, n);

   delete []array_.array;
   array_.array = nullptr;
}