// Taylor Series print [I don't get it :(]
//  e^x = 1 + x/1 + x^2/2! + x^3/3!.....
// time is O(n^2)

#include <stdio.h>

double e(int x, int y){ // x==e, y== x!
    static double p = 1;
    static double f = 1;

    if (y <= 0){
        return 1;
    }

    double r = e(x, y-1);
    p *= x;
    f *= y;
    return r + p/f;
}

int main(){
    printf("%lf\n", e(3, 10));
}