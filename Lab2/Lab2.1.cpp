/*
Realizați o aplicație care permite exprimarea în km a unei lungimi intoduse de la tastatură în mile. Se știe că o milă terestră = 1.609344km.
Alexandra Fone 20.10.2018
*/
#include <iostream>

using namespace std;

int main()
{
    double mile, km;
    //in mile
    cout << "Lungimea in mile: ";
    cin >> mile;
    //calc mile to km
    km = mile * 1.609344;
    cout << "Lungimea in Km este de: " << km << endl;
    return 0;
}
