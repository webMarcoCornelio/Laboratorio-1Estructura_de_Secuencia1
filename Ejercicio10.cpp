/** Ejercicio 10
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos d�as y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y 2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y 0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y 20 horas. */


#include <iostream>
using namespace std;

int main(){
    int dias, hora, ingreso;

    cout << "Ingresar la Cantidad de Horas: ";
    cin >> ingreso;

    dias = ingreso / 24;
    ingreso = ingreso - (dias * 24);
    hora = ingreso;

    cout << endl;
    cout << "Total de Dias: " << dias << endl;
    cout << "Y Total de Horas: " << hora << endl;

    return 0;
}
