// program for diagonal matrix

/*
15 0 0 0 0 
0 30 0 0 0 
0 0 45 0 0 
0 0 0 60 0 
0 0 0 0 75 
*/

#include <iostream>
using namespace std;

struct Matrix{
    int array[10];
    int dimension;
};

// set the value in matrix
void set(struct Matrix *m, int row, int column, int value){
    // formula is M[i,j] = non-zero if i == j
    if(row == column){
        m->array[row-1] = value;
    }
}

// get the value from matrix
int get(struct Matrix m, int row, int column){
    if(row == column){
        return m.array[row-1];
    }
    return 0;
}

// display the matrix
void display(struct Matrix m){
    for(int i = 0; i < m.dimension; i++){
        for(int j = 0; j < m.dimension; j++){
            if(i == j){
                cout << m.array[i] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main(){
    struct Matrix m;
    m.dimension = 5;
    set(&m, 1,1,15);
    set(&m, 2,2,30);
    set(&m, 3,3,45);
    set(&m, 4,4,60);
    set(&m, 5,5,75);

    display(m);
    cout << get(m, 1,1) << endl;
}