// reference also doing same things
// c++ reference variable not object so anything change reflect old

#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *y = &x; // 10
  cout << x <<" " << *y <<endl; // 10 10
  x = 50;
  cout << x <<" " << *y <<endl; // 50 50
}