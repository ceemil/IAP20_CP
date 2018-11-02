/*
Creaţi un program care iniţializează cu 0 valorile elementelor unui şir a declarat astfel:
int a[20];
Modificaţi apoi programul astfel încât să iniţializaţi elementele şirului astfel:

a[0] = 1, a[1] = 2, a[2] = 3 ..., a[19] = 20.
a[0] = 101, a[1] = 102, a[2] = 103 ..., a[19] = 120.
a[0] = 19, a[1] = 18, a[2] = 17, ... a[19] = 0.

Alexandra Frone 20.10.2018
*/
#include <iostream>

using namespace std;

int main(){
  //array declaration
  int a[20];
  //i - index
  int i;
  //init given array with 0
  for (i = 0; i < 20; i++){
    a[i] = 0;
  }
  for (i = 0; i < 20; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  cout << endl;
  cout << endl;

  //a[0] = 1, a[1] = 2, a[2] = 3 ..., a[19] = 20.
  for (i = 0; i < 20; i++){
    a[i] += i;
  }
  for (i = 0; i < 20; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  cout << endl;
  cout << endl;

  //a[0] = 101, a[1] = 102, a[2] = 103 ..., a[19] = 120.
  for (i = 0; i < 20; i++){
    a[i] = 100 + 1 + i;
  }
  for (i = 0; i < 20; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  cout << endl;
  cout << endl;

  //a[0] = 19, a[1] = 18, a[2] = 17, ... a[19] = 0.
  for (i = 0; i < 20; i++){
    a[i] = 20 - 1 - i;
  }
  for (i = 0; i < 20; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  cout << endl;
  cout << endl;
}
