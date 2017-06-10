#include <iostream>
#include <string>
using namespace std; 
int main() {
    float altura;
    float ancho;
    float area;
    float perimetro;
    cout << " Ingrese una altura " << endl;
    cin >> altura;
    cout << " Ingrese un ancho " << endl;
    cin >> ancho;
    area = altura * ancho;
    perimetro = altura * 2 + ancho * 2;
    cout << "El area y perimetro de un rectangulo  con estas medidas " " equivalen a " << altura * ancho << " y " << altura * 2 + ancho * 2 << endl;
}