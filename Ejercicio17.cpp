/** EJERCICIO 17
   El Laboratorio Gonzalez&Velez hace frascos de p�ldoras para aprender a programar.
   Cada frasco contiene 75 p�ldoras y cada p�ldora contiene 45mg de Briancetamol,
   2grs de Pintoxicilina y 7mg de �cido Simon�tico.
   Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad
   de miligramos de Briancetamol, Pintoxicilina y de �cido Simon�tico que son necesarios para elaborarlos.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Spanish");

    int frascos, briancetamol, pintoxicilina, acido_simonitico;


    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "  |       Laboratorio GONZ�LEZ & V�LEZ        |" << endl;
    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "    Cantidad de frascos p�ldoras PROGRAMAR: ";
    cin  >> frascos;

    briancetamol = (frascos*75)* 45;
    pintoxicilina = (frascos*75) * 2000;
    acido_simonitico = (frascos*75) * 7;

    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"     << endl;
    cout << "            MILIGRAMOS NECESARIOS      \n"           << endl;
    cout << "    Briancetamol    : " << briancetamol << " mg"     << endl;
    cout << "    Pintoxicilina   : " << pintoxicilina << " mg"    << endl;
    cout << "    �cido Simon�tico: " << acido_simonitico << " mg" << endl;
    cout << "\n  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"   << endl;

    return 0;
}
