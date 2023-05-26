/** Ejercicio 14
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
Ejemplo:
Importe  : 4500 ↲
Descuento: 40 ↲
Importe    : $ 4500
Descuento  : $ 1800
Total      : $ 2700   */

#include <iostream>
using namespace std;

int main(){
    ///Division entera
    int importe;
    int porcentaje;
    int total;
    int precioFinal;

    cout << "Ingresar el Importe Total de la Compra: ";
    cin >> importe;

    cout << "Ingresar la Cantidad de Descuento de la Compra % : ";
    cin >> porcentaje;

    total = importe * porcentaje / 100;
    precioFinal = importe - total;
    porcentaje = importe - precioFinal;

    cout <<endl << "Importe: " << importe << endl;
    cout << "Descuento: " << porcentaje << endl;
    cout << "Total a Pagar: " << precioFinal << endl;

    return 0;
}

