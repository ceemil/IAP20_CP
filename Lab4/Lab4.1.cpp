/*
Aplicaţi soluţia din cursul 4 pentru a calcula şi afişa pe ecran suma elementelor unui şir a introdus de la tastatură.
Alexandra Frone  22.10.2018
*/
#include <iostream>

using namespace std;

main (){
  // init number of elements
  // nr - number of elements; i - element index
  int nr,i;
  // init sum of the numbers
  long sum=0;
  cout << "Numarul elementelor: ";
  cin >> nr;
  // init array
  int a[nr-1];
  // fill the array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "]=";
    cin >> a[i];
    sum += a[i];
  }
  cout << "Suma elemenetelor din a[]: " << sum << endl;
  return 0;
}
