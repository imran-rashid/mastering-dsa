/*
Card :=
card has faces = 1,2,...10, j,q,k(11,12,13)
shape = 0, 1, 2, 3(diamond, heart)
color = 0, 1(red, black)
*/

#include <stdio.h>

struct card {
    int face;
    int shape;
    int color;
};

int main(){
    struct card playcard;
    playcard.color = 0;
    playcard.shape = 3;
    playcard.face = 10;

    printf("Face is %d\n", playcard.face);

    // array of structure
    struct card pc[3] = {{0,1,0}, {0,2,0}, {0,1,9}}; // occupied 3 slots memory
    // pc = {{0,1,0}, {0,2,0}, {0,1,9}}; Error [direct assignment in array not possible]
    printf("Shape is %d", pc[0].shape);
}