/* Creaţi un program a cărui execuție face ca elementul maxim dintr-un șir de valori numerice să ajungă pe ultima poziție a șirului.
Alexandra Frone 22.10.2018
*/

#include <iostream>

using namespace std;

main (){
  // init number of elements
  // nr - number of elements; i - element index; temp - temp value;
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

  // push the max value to the end
  for (i = 0; i < nr; i++){
    // if a[i] > a[i+1] meas that our current max value is at i position and we will move it to the i+1 position
    // like this at the end of the loop the max value will be at the end
    if (a[i] > a[i+1]){
      temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
    }
  }

  // print array
  for (i = 0; i < nr; i++){
    cout << "a[" << i << "] = " << a[i] << "; ";
  }
  return 0;
}
