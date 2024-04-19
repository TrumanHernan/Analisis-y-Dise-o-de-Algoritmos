/*2.28 - Escriba un programa que reciba como entrada un n�mero entero de cinco d�gitos, que separe ese n�mero en sus d�gitos 
individuales y los imprima, cada uno separado de los dem�s por tres espacios. [Sugerencia: use los operadores de divisi�n
entera 
y m�dulo.] Por ejemplo, si el usuario escribe el n�mero 42339, el programa debe imprimir:*/

#include <iostream>
using namespace std;
    
int main() {
  int numero, digito1, digito2, digito3, digito4, digito5;

  // Pedir al usuario que ingrese un n�mero entero de cinco d�gitos
  cout << "Ingrese un n�mero entero de cinco d�gitos: ";
  cin >> numero;

  // Separar los d�gitos del n�mero
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

