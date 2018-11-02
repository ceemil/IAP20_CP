/* Creaţi un program care decalează valorile dintr-un șir numeric, spre stânga, cu o poziție. Primul element din șirul inițial nu se pierde ci se adaugă la sfârșitul șirului.
Alexandra Frone 22.10.2018
*/
#include <iostream>

using namespace std;

main (){
  // init number of elements
  // nr - number of elements; i - element index; temp - temp value
  int nr,i,temp;
  cout << "Numarul elementelor: ";
  cin >> nr;
  // init array
  int a[nr-1];
  // fill the array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "]=";
    cin >> a[i];
  }
  // save the 1st value in temp
  temp = a[0];
  // push the values one to the left
  for (i = 0; i < nr; i++){
    a[i] = a[i+1];
  }
  // add the 1st removed element to the end
  a[nr-1] = temp;

  // print array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  return 0;
}
