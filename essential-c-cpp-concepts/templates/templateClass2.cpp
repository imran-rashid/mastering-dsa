// methods declared outside of class

#include <iostream>

template <class rec>
class Rectangle{
    private:
        rec length;
        rec breadth;

    public:
        Rectangle(rec a, rec b);
        rec Perimeter();
        rec Area();
        rec getLength();
        void setLength(rec l){
            length = l;
        }
        ~Rectangle(){}
};

template <class rec>
Rectangle<rec>::Rectangle(rec a, rec b){
    length = a;
    breadth = b;
}

template <class rec>
rec Rectangle<rec>::Area(){
    return length*breadth;
}

template <class rec>
rec Rectangle<rec>::Perimeter(){
    return 2*(length+breadth);
}

template <class rec>
rec Rectangle<rec>::getLength(){
    return length;
}

int main(){
    Rectangle<int> r(10, 5);
    r.setLength(50);
    std::cout << r.getLength() <<std::endl; // 50
    std::cout << r.Perimeter() <<std::endl; // 110
    r.~Rectangle(); // destroy object
}