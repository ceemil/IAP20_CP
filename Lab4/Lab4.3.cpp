/* Creaţi un program care realizează inversarea ordinii elementelor dintr-un șir de valori numerice.
Alexandra Frone 22.10.2018
*/
#include <iostream>

using namespace std;

main (){
  // init number of elements
  // nr - number of elements; i/j - element index; temp - temp value
  int nr,i,j,temp;
  cout << "Numarul elementelor: ";
  cin >> nr;
  // init array
  int a[nr-1];
  // fill the array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "]=";
    cin >> a[i];
  }
  // invert array
  // METHOD 1
  /*for (i = 0; i < nr / 2; i++){
    temp = a[i];
    a[i] = a[nr-1-i];
    a[nr-1-i] = temp;
  }*/

  // METHOD 2 (combined FOR)

  for (i = 0, j = nr-1; i < j; i++, j--){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }


  // print array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  return 0;
}
