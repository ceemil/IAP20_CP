/*
Scrieți o aplicație care calculează greutatea ideală a unei persoane. Relația de calcul este următoarea:
În relație h este înălțimea în cm iar v este vârsta în ani.
Observație:Pentru caculul greutății femeilor, valoarea obținută se înmulțește cu 0.9.
Alexandra Fone 20.10.2018
*/

#include <iostream>

using namespace std;

int main()
{
    int varsta, inaltime;
    double greutate;
    //in inaltime,varsta
    cout << "Inaltimea (cm): ";
    cin >> inaltime;
    cout << "Varsta (ani): ";
    cin >> varsta;
    //calc greutatea optimala
    greutate = 50 + 0.75*(inaltime - 150) + 0.25 * (varsta - 20);
    cout << "Greutatea ideala (barbat): " << greutate << "kg" << endl;
    cout << "Greutatea ideala (femeie): " << 0.9 * greutate << "kg" << endl;
    return 0;
}
