#include <iostream>
using namespace std;

template <class T>
class Array{
    private:
        T *A;
        int size;
        int length;
    
    public:
        Array(){
            size = 10;
            length = 0;
            A = new T[size];
        }

        Array(int size){
            size = size;
            length = 0;
            A = new T[size];
        }

        void display(){
            cout << "Elements are ";
            for(int i = 0; i < length; i++){
                cout << i[A] << " ";
            }
            cout << endl;
        }

        void insert(int index, T value){
            for(int i = length; i > index; i--){
                A[length] = A[length - 1];
            }
            A[index] = value;
            length++;
        }

        T delete_(int index){
            T copy = A[index];

            for(int i = index; i < length-1; i++){
                A[index] = A[index+1];
            }
            length -= 1;
            return copy;
        }
        ~Array(){
            delete []A;
        }
};

int main(){
    Array<int> arr(10);

    arr.insert(0,5);
    arr.insert(1,4);
    arr.insert(2,3);
    arr.display();
    arr.delete_(1);
    arr.display();
}