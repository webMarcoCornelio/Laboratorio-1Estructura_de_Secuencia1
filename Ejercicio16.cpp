/** Ejercicio 16
	Hacer un programa para ingresar una letra en may�sculas en una variable de tipo char y mostrar
	cu�ntas letras de diferencia hay en el alfabeto con respecto a la 'A'.

Ejemplo: Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

Recomendaci�n: Tratar de no googlear la soluci�n. Si no sale, dejarlo decantar y probar muchas variantes. */


#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Spanish");

    char A, letra_mayuscula;
    int diferencia_letra;

    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "  | Diferencia entre letra MAY�SCULA con la A  |" << endl;
    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "     Ingrese una letra MAY�SCULA : ";
    cin  >> letra_mayuscula;

    diferencia_letra = letra_mayuscula - 'A';

    cout << "\n     La diferencia es " << diferencia_letra << endl;

    return 0;
}
