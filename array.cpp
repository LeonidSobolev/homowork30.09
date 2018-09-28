#include <iostream>

struct array{
  int* ptr;
  int n;
  array(int n_){
    n = n_;
    ptr = new int[n];
  }

  int &operator[] (int i) { return *(ptr + i); }

};

int main(){
  array a = array(5);
  a[1] = 100;
  std::cout << a[1];
}
