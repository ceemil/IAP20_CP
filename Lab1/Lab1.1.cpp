/*
Dacă vârsta unei persoane citită de la tastatură corespunde unei persoane majore;
Alexandra Frone 20.10.2018
*/

#include <iostream>

using namespace std;

int main()
{
    int varsta;
    // age in
    cout << "Introduceti varsta : ";
    cin >> varsta;
    //age check
    if(varsta >= 18)
        cout << "Major" << endl;
    else
        cout << "Nu este major" << endl;
    return 0;
}
