/*2.28 - Escriba un programa que reciba como entrada un número entero de cinco dígitos, que separe ese número en sus dígitos 
individuales y los imprima, cada uno separado de los demás por tres espacios. [Sugerencia: use los operadores de división
entera 
y módulo.] Por ejemplo, si el usuario escribe el número 42339, el programa debe imprimir:*/

#include <iostream>
using namespace std;
    
int main() {
  int numero, digito1, digito2, digito3, digito4, digito5;

  // Pedir al usuario que ingrese un número entero de cinco dígitos
  cout << "Ingrese un número entero de cinco dígitos: ";
  cin >> numero;

  // Separar los dígitos del número
  digito5 = numero % 10;
  numero /= 10;
  digito4 = numero % 10;
  numero /= 10;
  digito3 = numero % 10;
  numero /= 10;
  digito2 = numero % 10;
  numero /= 10;
  digito1 = numero;

  cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;

  return 0;
}

