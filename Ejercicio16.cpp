/** Ejercicio 16
	Hacer un programa para ingresar una letra en mayúsculas en una variable de tipo char y mostrar
	cuántas letras de diferencia hay en el alfabeto con respecto a la 'A'.

Ejemplo: Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

Recomendación: Tratar de no googlear la solución. Si no sale, dejarlo decantar y probar muchas variantes. */


#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Spanish");

    char A, letra_mayuscula;
    int diferencia_letra;

    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "  | Diferencia entre letra MAYÚSCULA con la A  |" << endl;
    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "     Ingrese una letra MAYÚSCULA : ";
    cin  >> letra_mayuscula;

    diferencia_letra = letra_mayuscula - 'A';

    cout << "\n     La diferencia es " << diferencia_letra << endl;

    return 0;
}
