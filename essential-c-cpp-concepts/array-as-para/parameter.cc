// array can be pass only call by address not call by value
// since it is call by address so we can modify original array

#include <iostream>

// we can also use a* since it is pointer but a[] it is more specific and a* points to any int, not specific
void func (int a[], int n){ // a[] => pointer to array
    for (int i = 0; i < n; i++){
        std::cout << a[i] << std::endl;
    }

    a[0] = 55; // modify the original array value
}

int main(){
    int a[] = {2, 4, 6, 8, 10};
    func(a, 5);
    std::cout << a[0] <<std::endl;
}