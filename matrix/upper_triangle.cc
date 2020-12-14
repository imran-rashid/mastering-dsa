// upper triangle matrix in row major order

/**
upper_triangle Matrix ==>
1 2 3 4 5
0 2 3 4 5
0 0 3 4 5
0 0 0 4 5
0 0 0 0 5

* A[i][j] = 0 if i > j
* A[i][j] != 0 if i <= j
* (n(n+1))/2 non-zero values are present
* n^2 - (n(n+1))/2 == (n(n-1))/2
* (n(n-1))/2 zero values are present

* row major formula is => row*dimension - ((row-1)*row)/2 + column-row
* column major formula is => (column*column)/2 + row
*/

#include <iostream>
using namespace std;

class UpperTriangle{
    private:
        int *array; // it will store every non zero values
        int dimension;
    public:
        UpperTriangle(int n){
            dimension = n;
            array = new int[(n*(n+1))/2]; // number of non zero values
        }

        auto set(int row, int column, int value){
            if(row <= column) { 
                array[row*dimension - ((row-1)*row)/2 + column-row] = value;
            }
        }

        auto get(int row, int column){
            if(row <= column){
                return array[row*dimension - ((row-1)*row)/2 + column-row];
            }
            return 0;
        }

        auto display(){
            for(int i = 0; i < dimension; i++){
                for(int j = 0; j < dimension; j++){
                    if(i <= j){
                        cout << array[i*dimension - ((i-1)*i)/2 + j-i] << " ";
                    }
                    else {
                        cout << "0 ";
                    }
                }
                cout << endl;
            }
        }

        ~UpperTriangle(){
            delete []array;
        }

};

int main(){
    int dimension;
    cout << "Enter the dimension ";
    cin >> dimension;

    UpperTriangle upper_triangle(dimension);
    int x;

    cout << "Enter the matrix elements" << endl;
    for(int i = 0; i < dimension; i++){
        for(int j=0; j < dimension; j++){
            cin >> x;
            upper_triangle.set(i, j, x); // it will pick up every non zero value
        }
    }

    cout << "The matrix are" << endl;
    upper_triangle.display();
}