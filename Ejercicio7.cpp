/** Ejercicio 7
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada
a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800. */

#include <iostream>
using namespace std;

int main(){
    int importe;
    int porcentaje;
    int total;
    int precioFinal;

    cout << "Ingresar el Importe Total de la Venta: ";
    cin >> importe;

    cout << "Ingresar la Cantidad de Descuento de la Venta % : ";
    cin >> porcentaje;

    total = importe * porcentaje / 100;
    precioFinal = importe - total;

    cout << endl << "El Total a Pagar es: " << precioFinal << endl;

    return 0;
}


