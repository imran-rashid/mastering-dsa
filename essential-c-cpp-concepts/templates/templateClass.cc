#include <iostream>

template <class t>
class ArithmeticOperation{
    private:
        t num1;
        t num2;
    
    public:
        ArithmeticOperation(t a, t b){
            num1 = a;
            num2 = b;
        }
        t Addition(){
            return num1+num2;
        }
        t Subtraction(){
            return num1-num2;
        }
};      

int main(){
    ArithmeticOperation<int> ao(false, true);
    std::cout << ao.Addition() <<std::endl;
}


