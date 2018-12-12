#include <iostream>

using namespace std;

int main(){
  //array declaration
  int a[20];
  //i - index
  int i;

  //a[0] = 1, a[1] = 2, a[2] = 3 ..., a[19] = 20.
  for (i = 0; i < 20; i++){
    a[i] += i;
  }

  for (i = 0; i < 20; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  cout << endl;
  cout << endl;
}
