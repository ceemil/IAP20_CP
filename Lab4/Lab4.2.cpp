/* Creaţi un program care determină valoarea maximă dintr-un șir de valori numerice.
Citirea elementelor șirului;
Determinarea maximului folosind metoda din imagine;
Afișarea rezultatului prelucrării.
Alexandra Frone 22.10.2018
*/
#include <iostream>

using namespace std;

main (){
  // init number of elements
  // nr - number of elements; i - element index; max - largest value in the array
  int nr,i,max;
  // init sum of the numbers
  cout << "Numarul elementelor: ";
  cin >> nr;
  // init array
  int a[nr-1];
  // fill the array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "]=";
    cin >> a[i];
  }
  // find max value
  max = a[0];
  for (i = 0; i < nr; i++){
    if (max < a[i]){
      max = a[i];
    }
  }
  // print max value
  cout << "Numarul Maxim: " << max << endl;
  return 0;
}
