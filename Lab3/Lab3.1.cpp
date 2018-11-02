/*
Realizați o aplicație care realizează numărătoarea inversă care precede lansarea unei rachete.
Alexandra Frone 20.10.2018
*/
#include <iostream>
#include <windows.h>  // Sleep() function

using namespace std;

int main(){
//loop from 10 to 0
  for (int i = 10; i > 0; i--) {
      cout << i << endl;
      Sleep(1000);         // Temporizare 1s
   }
   cout << "Racheta lansata." << endl;
   return 0;
}
