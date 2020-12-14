// Sparse matrix contains very few non-zero elements
// https://www.geeksforgeeks.org/sparse-matrix-representation/
// https://www.geeksforgeeks.org/operations-sparse-matrices/

#include <iostream>
using namespace std;

int main(){
    int spareMatrix[4][5] = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };

    int size = 0; // number of non-zero elements
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(spareMatrix[i][j] != 0) size += 1;
        }
    }

    // number of columns should be equal to the non-zero elements
    int compactMatrix[3][size];

    // Making new matrix
    int k = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if (spareMatrix[i][j] != 0){
                compactMatrix[0][k] = i; // row postion
                compactMatrix[1][k] = j; // column postion
                compactMatrix[2][k] = spareMatrix[i][j];
                k++;
            }
        }
    }

    // print the matrix row | column | value
    /**
    0  0  1  1  3  3  
    2  4  2  3  1  2  
    3  4  5  7  2  6 
    */
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < size; j++){
            cout << compactMatrix[i][j] << "  ";
        }
        cout << endl;
    }
}