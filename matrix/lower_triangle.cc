// lower-triangle matrix with row major maping

/**
lower_triangle Matrix ==>
1 0 0 0 0
1 2 0 0 0
1 2 3 0 0
1 2 3 4 0
1 2 3 4 5

* A[i][j] = 0 if i < j
* A[i][j] != 0 if i >= j
* (n(n+1))/2 non-zero values are present
* n^2 - (n(n+1))/2 == (n(n-1))/2
* (n(n-1))/2 zero values are present

* row major formula is => (row*row)/2 + column
* column major formula is => column*dimension - ((column-1)*column)/2 + row-column
*/

#include <iostream>
using namespace std;

class LowerTriangle{
    private:
        int *array;
        int dimension;
    public:
        LowerTriangle(int n){
            array = new int[(n*(n+1))/2]; // number of non zero values
            dimension = n;
        }

        auto set(int i, int j, int value){
            if (i >= j){
                array[(i*(i))/2 + j] = value;
            }
        }

        auto get(int i, int j){
            if (i >= j){
                return array[(i*(i))/2 + j]; // formula for catch non zero value
            } 
            return 0;
        }

        void display(){
            for(int i = 0; i < dimension; i++){
                for(int j = 0; j < dimension; j++){
                    if(i >= j){
                        cout << array[(i*(i))/2 + j] << " ";
                    } else {
                        cout << "0 ";
                    }
                }
                cout << endl;
            }
        }
        ~LowerTriangle(){
            delete []array;
        }
};

int main(){
    int dimension;
    cout << "Enter the dimension ";
    cin >> dimension;
    int x;

    LowerTriangle lower_t(dimension);
    cout << "Enter all elements " << endl;
    for(int i = 0; i < dimension; i++){
        for(int j =0; j < dimension; j++){
            cin >> x;
            lower_t.set(i, j, x); // pick up only non zero values every iteration
        }
    }
    
    cout << "The output is " << endl;
    lower_t.display();
}