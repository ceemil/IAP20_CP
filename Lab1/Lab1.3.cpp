/*
Valoarea unui lot de marfă dacă se introduce prețul unitar și cantitatea.
Alexandra Frone 20.10.2018
*/
#include <iostream>

using namespace std;

int main()
{
    int cantitate,pretUnitar,valoare;
    // cantitate in
    cout << "Cantitatea lotului de marfa: ";
    cin >> cantitate;
    // pretUnitar in
    cout << "Pretul lotului de marfa: ";
    cin >> pretUnitar;
    //calculate value
    valoare = cantitate * pretUnitar;
        cout << "Valoarea lotului de marfa: " << valoare << endl;
    return 0;
}
