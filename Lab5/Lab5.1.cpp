/*Aplicaţi soluţia din cursul 5 pentru a calcula şi afişa pe ecran valorile funcțiilor sin(), cos() sau tan() pentru un unghi x introdus de la tastatură.
Alexandra Frone 20.10.2018*/
#include <iostream>
#include <math.h>

using namespace std;

main(){
  //x - Unghiul
  //in math.h PI is defined as M_PI variable
  double x,rad = 0;
  cout << "Unghiul: ";
  cin >> x;
  // convert angle to radian
  rad = x / 180.0 * M_PI;
  // calculate sin cos tan
  cout << "Sin(" << x << ")= " << sin(rad) << endl;
  cout << "Cos(" << x << ")= " << cos(rad) << endl;
  cout << "Tan(" << x << ")= " << tan(rad) << endl;
}
