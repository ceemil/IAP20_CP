/*
Dacă două valori citite de la tastatură sunt în ordine crescătoare;
Alexandra Frone 20.10.2018
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    // a in
    cout << "a = ";
    cin >> a;
    // b in
    cout << "b = ";
    cin >> b;
    //check running order
    if (a < b)
        cout << "Ordine crescatoare: " << a << " < " << b << endl;
    else
        cout << "Nu este in Ordine crescatoare: " << a << " > " << b << endl;
    return 0;
}
