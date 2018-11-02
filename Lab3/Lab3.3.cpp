/* Creaţi un program care citeşte valorile unui şir de valori întregi a şi apoi schimbă semnul elementelor negative, respectiv dacă a[i] < 0 atunci a[i] = -a[i].
Observaţie: În aplicaţiile următoare referitoare la şiruri de valori puteţi să nu mai citiţi şirul iniţial (ia cam mult timp!) iniţializând şirul în momentul declarării după modelul:

int a[] = {1, -3, 6, 7, -12, -4, 2, 9};
Alexandra Frone 20.11.2018*/
#include <iostream>

using namespace std;

int main(){
  //array declaration
  int a[] = {1, -3, 6, 7, -12, -4, 2, 9};
  //i - index
  int i;
  for (i = 0; i < 8; i++){
    if (a[i] < 0)
      a[i] = -a[i];
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  return 0;
}
