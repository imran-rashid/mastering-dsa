// Symmetic Matrix

/**
Symmetric Matrix are =>
2 2 2
2 3 3
2 3 4

* The main characteristic of symmetric matrix is A[i][j] == A[j][i] == same value return
* A[3][2] == A[2][3] == same value

* A[i][j] == lowerTriangleValue when i >= j
* A[i][j] == upperTriangleValue when i < j
* we can build it in either lower or upper triangle
*/

#include <iostream>
using namespace std;

struct SymmetricMatrix{
    int *array;
    int dimension;
};

void set(struct SymmetricMatrix *sm, int i, int j, int v){
    if(i >= j){
        sm->array[(i*i)/2 + j] = v;
    }
}

int get(struct SymmetricMatrix sm, int i, int j){
    if(i >= j){
        return sm.array[(i*i)/2 + j];
    }
    return 0;
}

void display(struct SymmetricMatrix sm){
    for(int i=0; i<sm.dimension;i++){
        for(int j=0;j<sm.dimension;j++){
            if(i >= j){
                // lower triangle row major formula
                cout << sm.array[(i*i)/2 + j] << " "; // if i omit this display will print only upper part
            } else {
                // upper triangle column major formula
                cout << sm.array[(j*j)/2 + i] << " "; // if i omit this display will print only lower part
            }
        }
        cout << endl;
    }
}

int main(){
    struct SymmetricMatrix sm ;
    int d, x;
    cout << "Enter dimension ";
    cin >> d;
    sm.dimension=d;
    sm.array = new int[(d*(d+1)/2)];

    cout << "Enter elements" << endl;
    for(int i=0; i<d; i++){
        for(int j=0; j<d; j++){
            cin >> x;
            set(&sm, i, j, x);
        }
    }

    cout << "The matrix are" <<endl;
    display(sm);
    delete []sm.array;
}