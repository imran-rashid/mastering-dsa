/**
 * e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! .....
 * e^x = 1 + x/1 + (x*x)/(1*2) + (x*x*x)/(1*2*3) + (x*x*x*x)/(1*2*3*4)
 *     = 1 + x/1 [x/2 + x*x/2*3 + x*x*x/2*3*4]
 *     = 1 + x/1 [1 + x/2 [x/3 + x*x/3*4]]
 *     = 1 + x/1 [1 + x/2 [1 + x/3 [1 + x/4]]]
*/


// time complexity is O(n) & space is O(1)
#include <stdio.h>

double taylorSeries(int x, int n){
    double s = 1;

    while(n > 0){
        s = 1+ x*s/n;
        n--;
    }
    return s;
}

// with recursion O(n)
double taylorSeries2(int x, int p){
    static double s = 1;
    if (p > 0){
        s = 1 + x*s/p;
        return taylorSeries2(x, p-1);
    }
    return s;
}

int main(){
    printf("%lf\n", taylorSeries2(3, 10));
    printf("%lf\n", taylorSeries(3, 10));
}