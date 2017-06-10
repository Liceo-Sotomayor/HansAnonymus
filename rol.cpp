#include <iostream>
#include <string>
using namespace std; 
int main() {
    bool esMayor;
    int a, b;
    cout << " Ingrese Numero " << endl;
    cin >> a;
    cout << " Ingrese otro numero " << endl;
    cin >> b;
    esMayor = a > b;
    if (esMayor){   
    cout << " El numero " << a << " es mayor que " << b << endl;
    }
}