/** Ejercicio 2
 Hacer un programa que solicite por teclado que se ingresen dos números y luego
 guardarlos en dos variables distintas. A continuación se deben intercambiar
 mutuamente los valores en ambas variables y mostrarlos por pantalla.
 Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
 usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3. */

 #include <iostream>
using namespace std;

int main(){
    int Num1;
    int Num2;
    int Cambio;
    cout << "Ingresar Primer Numero: ";
    cin >> Num1;
    cout << "Ingresar Segundo Numero: ";
    cin >> Num2;

    Cambio = Num1;
    Num1 = Num2;

    cout << endl << "El Nuevo Primer Numero es: "<< Num1 <<endl;
    cout << endl << "El Nuevo Segundo Numero es: "<< Cambio <<endl;

     return 0;
 }
