/**
* Pointer is an address variable. That is meant, storing address not data itself. * Pointer is used for indirectly access data.

* any program can directly access stack memory in cpu, can't access heap memory

* Major uses of pointer :=
    * access heap memory
    * access external things(mouse, keyboard)
    * parameter passsing
*/

#include <stdio.h>

int main(){
    int a = 10; // normal variable
    int *p = &a; // pointer variable

    printf("%d\n", a); // 10
    printf("%d\n", &a); // address of a
    printf("%d\n", p); // address of a
    printf("%d\n", *p); // value of a
}