/*
Pe modelul exercițiului precedent, modificați aplicația realizată astfel încât să realizeze exprimarea în grade Celsius a unei temperaturi date în grade Fahrenheit. Relația de calcul este următoarea:.
Alexandra Fone 20.10.2018
*/
#include <iostream>

using namespace std;

int main()
{
    double cel, fahr;
    //in fahr
    cout << "Temperatura in grade Fahrenheit: ";
    cin >> fahr;
    //calc fahr to cel
    cel = (fahr - 32) * 5./9;
    cout << "Temperatura in grade Celsius este de: " << cel << endl;
    return 0;
}
